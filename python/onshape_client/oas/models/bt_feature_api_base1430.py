# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.113
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import
import re  # noqa: F401
import sys  # noqa: F401

import six  # noqa: F401
import nulltype  # noqa: F401

from onshape_client.oas.model_utils import (  # noqa: F401
    ModelComposed,
    ModelNormal,
    ModelSimple,
    date,
    datetime,
    file_type,
    int,
    none_type,
    str,
    validate_get_composed_info,
)

try:
    from onshape_client.oas.models import bt_assembly_feature_list_response1174
except ImportError:
    bt_assembly_feature_list_response1174 = sys.modules[
        "onshape_client.oas.models.bt_assembly_feature_list_response1174"
    ]
try:
    from onshape_client.oas.models import bt_configuration_response2019
except ImportError:
    bt_configuration_response2019 = sys.modules[
        "onshape_client.oas.models.bt_configuration_response2019"
    ]
try:
    from onshape_client.oas.models import bt_configuration_update_call2933
except ImportError:
    bt_configuration_update_call2933 = sys.modules[
        "onshape_client.oas.models.bt_configuration_update_call2933"
    ]
try:
    from onshape_client.oas.models import bt_feature_definition_call1406
except ImportError:
    bt_feature_definition_call1406 = sys.modules[
        "onshape_client.oas.models.bt_feature_definition_call1406"
    ]
try:
    from onshape_client.oas.models import bt_feature_definition_response1617
except ImportError:
    bt_feature_definition_response1617 = sys.modules[
        "onshape_client.oas.models.bt_feature_definition_response1617"
    ]
try:
    from onshape_client.oas.models import bt_feature_list_response2457
except ImportError:
    bt_feature_list_response2457 = sys.modules[
        "onshape_client.oas.models.bt_feature_list_response2457"
    ]
try:
    from onshape_client.oas.models import bt_feature_script_eval_call2377
except ImportError:
    bt_feature_script_eval_call2377 = sys.modules[
        "onshape_client.oas.models.bt_feature_script_eval_call2377"
    ]
try:
    from onshape_client.oas.models import bt_feature_script_eval_response1859
except ImportError:
    bt_feature_script_eval_response1859 = sys.modules[
        "onshape_client.oas.models.bt_feature_script_eval_response1859"
    ]
try:
    from onshape_client.oas.models import bt_feature_specs_response664
except ImportError:
    bt_feature_specs_response664 = sys.modules[
        "onshape_client.oas.models.bt_feature_specs_response664"
    ]
try:
    from onshape_client.oas.models import bt_feature_studio_contents2239
except ImportError:
    bt_feature_studio_contents2239 = sys.modules[
        "onshape_client.oas.models.bt_feature_studio_contents2239"
    ]
try:
    from onshape_client.oas.models import bt_set_feature_rollback_call1899
except ImportError:
    bt_set_feature_rollback_call1899 = sys.modules[
        "onshape_client.oas.models.bt_set_feature_rollback_call1899"
    ]
try:
    from onshape_client.oas.models import bt_set_feature_rollback_response1042
except ImportError:
    bt_set_feature_rollback_response1042 = sys.modules[
        "onshape_client.oas.models.bt_set_feature_rollback_response1042"
    ]
try:
    from onshape_client.oas.models import bt_update_features_call1748
except ImportError:
    bt_update_features_call1748 = sys.modules[
        "onshape_client.oas.models.bt_update_features_call1748"
    ]
try:
    from onshape_client.oas.models import bt_update_features_response1333
except ImportError:
    bt_update_features_response1333 = sys.modules[
        "onshape_client.oas.models.bt_update_features_response1333"
    ]


class BTFeatureApiBase1430(ModelNormal):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Attributes:
      allowed_values (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          with a capitalized key describing the allowed value and an allowed
          value. These dicts store the allowed enum values.
      attribute_map (dict): The key is attribute name
          and the value is json key in definition.
      discriminator_value_class_map (dict): A dict to go from the discriminator
          variable value to the discriminator class name.
      validations (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          that stores validations for max_length, min_length, max_items,
          min_items, exclusive_maximum, inclusive_maximum, exclusive_minimum,
          inclusive_minimum, and regex.
      additional_properties_type (tuple): A tuple of classes accepted
          as additional properties values.
    """

    allowed_values = {}

    validations = {}

    additional_properties_type = None

    @staticmethod
    def openapi_types():
        """
        This must be a class method so a model may have properties that are
        of type self, this ensures that we don't create a cyclic import

        Returns
            openapi_types (dict): The key is attribute name
                and the value is attribute type.
        """
        return {
            "bt_type": (str,),  # noqa: E501
            "library_version": (int,),  # noqa: E501
            "microversion_skew": (bool,),  # noqa: E501
            "reject_microversion_skew": (bool,),  # noqa: E501
            "serialization_version": (str,),  # noqa: E501
            "source_microversion": (str,),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return {
            "bt_type": {
                "BTUpdateFeaturesCall-1748": bt_update_features_call1748.BTUpdateFeaturesCall1748,
                "BTFeatureDefinitionResponse-1617": bt_feature_definition_response1617.BTFeatureDefinitionResponse1617,
                "BTConfigurationUpdateCall-2933": bt_configuration_update_call2933.BTConfigurationUpdateCall2933,
                "BTFeatureDefinitionCall-1406": bt_feature_definition_call1406.BTFeatureDefinitionCall1406,
                "BTUpdateFeaturesResponse-1333": bt_update_features_response1333.BTUpdateFeaturesResponse1333,
                "BTFeatureListResponse-2457": bt_feature_list_response2457.BTFeatureListResponse2457,
                "BTFeatureStudioContents-2239": bt_feature_studio_contents2239.BTFeatureStudioContents2239,
                "BTAssemblyFeatureListResponse-1174": bt_assembly_feature_list_response1174.BTAssemblyFeatureListResponse1174,
                "BTSetFeatureRollbackCall-1899": bt_set_feature_rollback_call1899.BTSetFeatureRollbackCall1899,
            },
        }

    attribute_map = {
        "bt_type": "btType",  # noqa: E501
        "library_version": "libraryVersion",  # noqa: E501
        "microversion_skew": "microversionSkew",  # noqa: E501
        "reject_microversion_skew": "rejectMicroversionSkew",  # noqa: E501
        "serialization_version": "serializationVersion",  # noqa: E501
        "source_microversion": "sourceMicroversion",  # noqa: E501
    }

    @staticmethod
    def _composed_schemas():
        return None

    required_properties = set(
        [
            "_data_store",
            "_check_type",
            "_from_server",
            "_path_to_item",
            "_configuration",
        ]
    )

    def __init__(
        self,
        _check_type=True,
        _from_server=False,
        _path_to_item=(),
        _configuration=None,
        **kwargs
    ):  # noqa: E501
        """bt_feature_api_base1430.BTFeatureApiBase1430 - a model defined in OpenAPI

        Keyword Args:
            _check_type (bool): if True, values for parameters in openapi_types
                                will be type checked and a TypeError will be
                                raised if the wrong type is input.
                                Defaults to True
            _path_to_item (tuple/list): This is a list of keys or values to
                                drill down to the model in received_data
                                when deserializing a response
            _from_server (bool): True if the data is from the server
                                False if the data is from the client (default)
            _configuration (Configuration): the instance to use when
                                deserializing a file_type parameter.
                                If passed, type conversion is attempted
                                If omitted no type conversion is done.
            bt_type (str): [optional]  # noqa: E501
            library_version (int): [optional]  # noqa: E501
            microversion_skew (bool): [optional]  # noqa: E501
            reject_microversion_skew (bool): [optional]  # noqa: E501
            serialization_version (str): [optional]  # noqa: E501
            source_microversion (str): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            if (
                var_name not in self.attribute_map
                and self._configuration is not None
                and self._configuration.discard_unknown_keys
                and self.additional_properties_type is None
            ):
                # discard variable.
                continue
            setattr(self, var_name, var_value)

    @classmethod
    def get_discriminator_class(cls, from_server, data):
        """Returns the child class specified by the discriminator"""
        discriminator = cls.discriminator()
        discr_propertyname_py = list(discriminator.keys())[0]
        discr_propertyname_js = cls.attribute_map[discr_propertyname_py]
        if from_server:
            class_name = data[discr_propertyname_js]
        else:
            class_name = data[discr_propertyname_py]
        class_name_to_discr_class = discriminator[discr_propertyname_py]
        return class_name_to_discr_class.get(class_name)
