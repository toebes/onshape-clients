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



#include "BTMParameterFeatureList_1749.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMParameterFeatureList_1749::BTMParameterFeatureList_1749()
{
    m_FeatureIdsIsSet = false;
}

BTMParameterFeatureList_1749::~BTMParameterFeatureList_1749()
{
}

void BTMParameterFeatureList_1749::validate()
{
    // TODO: implement validation
}

web::json::value BTMParameterFeatureList_1749::toJson() const
{
    web::json::value val = this->BTMParameter_1::toJson();
    
    if(m_FeatureIdsIsSet)
    {
        val[utility::conversions::to_string_t("featureIds")] = ModelBase::toJson(m_FeatureIds);
    }

    return val;
}

bool BTMParameterFeatureList_1749::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMParameter_1::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("featureIds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("featureIds"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_featureIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_featureIds);
            setFeatureIds(refVal_featureIds);
        }
    }
    return ok;
}

void BTMParameterFeatureList_1749::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ParameterIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterId"), m_ParameterId));
    }
    if(m_FeatureIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("featureIds"), m_FeatureIds));
    }
}

bool BTMParameterFeatureList_1749::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterId")))
    {
        utility::string_t refVal_parameterId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterId")), refVal_parameterId );
        setParameterId(refVal_parameterId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("featureIds")))
    {
        std::vector<utility::string_t> refVal_featureIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("featureIds")), refVal_featureIds );
        setFeatureIds(refVal_featureIds);
    }
    return ok;
}

std::vector<utility::string_t>& BTMParameterFeatureList_1749::getFeatureIds()
{
    return m_FeatureIds;
}

void BTMParameterFeatureList_1749::setFeatureIds(const std::vector<utility::string_t>& value)
{
    m_FeatureIds = value;
    m_FeatureIdsIsSet = true;
}

bool BTMParameterFeatureList_1749::featureIdsIsSet() const
{
    return m_FeatureIdsIsSet;
}

void BTMParameterFeatureList_1749::unsetFeatureIds()
{
    m_FeatureIdsIsSet = false;
}
}
}
}
}

