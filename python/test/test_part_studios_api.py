from onshape_client.oas import BTMParameterString149, BTMSketch151, BTMSketchConstraint2, BTMSketchCurveSegment155, \
    BTMIndividualQuery138, BTMParameterQueryList148, BTMSketchPoint158, BTCurveGeometryLine117
from onshape_client.oas.models.bt_feature_definition_call1406 import BTFeatureDefinitionCall1406
from onshape_client.oas.models.bt_id_translation_params import BTIdTranslationParams
from onshape_client.oas.models.btm_feature134 import BTMFeature134
from onshape_client.oas.models.btm_parameter_boolean144 import BTMParameterBoolean144
from onshape_client.oas.models.btm_parameter_quantity147 import BTMParameterQuantity147
from onshape_client.oas.models.btm_parameter_enum145 import BTMParameterEnum145

import json

from onshape_client.onshape_url import OnshapeElement


def test_translate_ids(configurable_cubes, client):
    sketch_id = "JCF"
    params = BTIdTranslationParams(ids=[sketch_id], source_document_microversion="99097c624be5cd434b03f906")
    cube = configurable_cubes[1]
    result = client.part_studios_api.translate_ids(cube.did, cube.wvm, cube.wvmid, cube.eid, params)
    assert result.ids[0].source == sketch_id
    assert result.ids[0].target[0] == sketch_id

def test_get_features(cube, client):
    result = client.part_studios_api.get_features1(cube.did, cube.wvm, cube.wvmid, cube.eid, _preload_content=False)
    data = json.loads(result.data)
    assert data['features'][0]['message']['name'] == 'Sketch 1'

def test_create_features(client, part_studio, assets):
    width = f"{3}*meter"
    length = f"{5}*meter"
    # Get the json:
    feature = json.load((assets / 'add_rectangle_feature.json').open())
    # Set width:
    feature['feature']['message']['constraints'][11]['message']['parameters'][2]['message']['expression'] = width
    # Set length:
    feature['feature']['message']['constraints'][12]['message']['parameters'][2]['message']['expression'] = length
    client.part_studios_api.add_feature1(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid, body=feature, _preload_content=False)
    result_features2 = client.part_studios_api.get_features1(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid)
    result_features = json.loads(client.part_studios_api.get_features1(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid, _preload_content=False).data.decode('UTF-8'))
    assert result_features['features'][0]['constraints'][11]['parameters'][2]['expression'] == width
    assert result_features['features'][0]['constraints'][12]['parameters'][2]['expression'] == length

def test_insert_point_sketch(client, part_studio):
    PLANE_ID = "JDC" # The plane deterministic ID for the sketch
    plane_query = BTMParameterQueryList148(parameter_id="sketchPlane", queries=[BTMIndividualQuery138(deterministic_ids=[PLANE_ID])])
    point = BTMSketchPoint158(y=-0.071735, x=-0.0564367610245, is_user_point=True, is_construction=False)
    sketch = BTMSketch151(entities=[point], name="My New Point", parameters=[plane_query])
    feature_definition = BTFeatureDefinitionCall1406(feature=sketch)
    client.part_studios_api.add_part_studio_feature(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid, bt_feature_definition_call1406_bt_feature_definition_call1406=feature_definition, _preload_content=False)

def test_insert_line_sketch(client, part_studio):
    FEATURE_NAME = "My New Line"
    PLANE_ID = "JDC" # The plane deterministic ID for the sketch
    plane_query = BTMParameterQueryList148(parameter_id="sketchPlane", queries=[BTMIndividualQuery138(deterministic_ids=[PLANE_ID])])
    LINE_ID = "myLine"
    START = "start"
    END = "end"
    POINT_ID = "myPoint"

    point_string_param = BTMParameterString149(value=POINT_ID, parameter_id="localFirst")
    line_end_string_param = BTMParameterString149(value=f"{LINE_ID}.{START}", parameter_id="localSecond")
    coincident_constraint = BTMSketchConstraint2(constraint_type="COINCIDENT", parameters=[point_string_param, line_end_string_param], entity_id="constrainId", bt_type="BTMSketchConstraint-2")
    point = BTMSketchPoint158(y=-0.071735, x=-0.0564367610245, is_user_point=True, is_construction=False, entity_id=POINT_ID)
    line_geometry = BTCurveGeometryLine117(pnt_x=0., pnt_y=0., dir_x=0.5, dir_y=0.5)
    line = BTMSketchCurveSegment155(start_point_id=f"{LINE_ID}.{START}", end_point_id=f"{LINE_ID}.{END}", start_param= 0., end_param=1., geometry=line_geometry, entity_id=LINE_ID)
    sketch = BTMSketch151(entities=[line, point], name="My New Line", parameters=[plane_query], constraints=[coincident_constraint])
    feature_definition = BTFeatureDefinitionCall1406(feature=sketch)
    client.part_studios_api.add_part_studio_feature(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid, bt_feature_definition_call1406_bt_feature_definition_call1406=feature_definition)
    features = client.part_studios_api.get_part_studio_features(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid, eid=part_studio.eid)
    assert features.features[0].name == FEATURE_NAME

def test_create_surface(client, part_studio):
    test_insert_line_sketch(client, part_studio)
    tool_body_type = BTMParameterEnum145(value="SURFACE", enum_name="ToolBodyType", parameter_id="bodyType")
    operation_type = BTMParameterEnum145(value="NEW", enum_name="NewSurfaceOperationType", parameter_id="surfaceOperationType")
    line_query = BTMParameterQueryList148(parameter_id="surfaceEntities",
                                           queries=[BTMIndividualQuery138(deterministic_ids=["JFB"])])
    length = BTMParameterQuantity147(expression="3.03*in", parameter_id="depth")
    extrude_feature = BTMFeature134(bt_type="BTMFeature-134", name="My extrude", feature_type="extrude", parameters=[tool_body_type, operation_type, line_query, length])
    feature_definition = BTFeatureDefinitionCall1406(feature=extrude_feature)
    client.part_studios_api.add_part_studio_feature(did=part_studio.did, wvm=part_studio.wvm, wvmid=part_studio.wvmid,
                                                    eid=part_studio.eid,
                                                    bt_feature_definition_call1406_bt_feature_definition_call1406=feature_definition)

