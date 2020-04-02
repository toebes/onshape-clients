/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * The version of the OpenAPI document: 1.113
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "BTExportModelEdge_1782.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTExportModelEdge_1782::BTExportModelEdge_1782()
{
    m_CurveIsSet = false;
    m_GeometryIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_VerticesIsSet = false;
}

BTExportModelEdge_1782::~BTExportModelEdge_1782()
{
}

void BTExportModelEdge_1782::validate()
{
    // TODO: implement validation
}

web::json::value BTExportModelEdge_1782::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CurveIsSet)
    {
        val[utility::conversions::to_string_t("curve")] = ModelBase::toJson(m_Curve);
    }
    if(m_GeometryIsSet)
    {
        val[utility::conversions::to_string_t("geometry")] = ModelBase::toJson(m_Geometry);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_VerticesIsSet)
    {
        val[utility::conversions::to_string_t("vertices")] = ModelBase::toJson(m_Vertices);
    }

    return val;
}

bool BTExportModelEdge_1782::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("curve")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("curve"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTCurveDescription_1583> refVal_curve;
            ok &= ModelBase::fromJson(fieldValue, refVal_curve);
            setCurve(refVal_curve);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("geometry")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geometry"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTExportModelEdgeGeometry_1125> refVal_geometry;
            ok &= ModelBase::fromJson(fieldValue, refVal_geometry);
            setGeometry(refVal_geometry);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vertices")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vertices"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_vertices;
            ok &= ModelBase::fromJson(fieldValue, refVal_vertices);
            setVertices(refVal_vertices);
        }
    }
    return ok;
}

void BTExportModelEdge_1782::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CurveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("curve"), m_Curve));
    }
    if(m_GeometryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("geometry"), m_Geometry));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_VerticesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("vertices"), m_Vertices));
    }
}

bool BTExportModelEdge_1782::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("curve")))
    {
        std::shared_ptr<BTCurveDescription_1583> refVal_curve;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("curve")), refVal_curve );
        setCurve(refVal_curve);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("geometry")))
    {
        std::shared_ptr<BTExportModelEdgeGeometry_1125> refVal_geometry;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("geometry")), refVal_geometry );
        setGeometry(refVal_geometry);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("vertices")))
    {
        std::vector<utility::string_t> refVal_vertices;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("vertices")), refVal_vertices );
        setVertices(refVal_vertices);
    }
    return ok;
}

std::shared_ptr<BTCurveDescription_1583> BTExportModelEdge_1782::getCurve() const
{
    return m_Curve;
}

void BTExportModelEdge_1782::setCurve(const std::shared_ptr<BTCurveDescription_1583>& value)
{
    m_Curve = value;
    m_CurveIsSet = true;
}

bool BTExportModelEdge_1782::curveIsSet() const
{
    return m_CurveIsSet;
}

void BTExportModelEdge_1782::unsetCurve()
{
    m_CurveIsSet = false;
}
std::shared_ptr<BTExportModelEdgeGeometry_1125> BTExportModelEdge_1782::getGeometry() const
{
    return m_Geometry;
}

void BTExportModelEdge_1782::setGeometry(const std::shared_ptr<BTExportModelEdgeGeometry_1125>& value)
{
    m_Geometry = value;
    m_GeometryIsSet = true;
}

bool BTExportModelEdge_1782::geometryIsSet() const
{
    return m_GeometryIsSet;
}

void BTExportModelEdge_1782::unsetGeometry()
{
    m_GeometryIsSet = false;
}
utility::string_t BTExportModelEdge_1782::getId() const
{
    return m_Id;
}

void BTExportModelEdge_1782::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTExportModelEdge_1782::idIsSet() const
{
    return m_IdIsSet;
}

void BTExportModelEdge_1782::unsetId()
{
    m_IdIsSet = false;
}
std::vector<utility::string_t>& BTExportModelEdge_1782::getVertices()
{
    return m_Vertices;
}

void BTExportModelEdge_1782::setVertices(const std::vector<utility::string_t>& value)
{
    m_Vertices = value;
    m_VerticesIsSet = true;
}

bool BTExportModelEdge_1782::verticesIsSet() const
{
    return m_VerticesIsSet;
}

void BTExportModelEdge_1782::unsetVertices()
{
    m_VerticesIsSet = false;
}
}
}
}
}

