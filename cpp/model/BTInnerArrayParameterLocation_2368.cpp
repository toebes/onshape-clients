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



#include "BTInnerArrayParameterLocation_2368.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTInnerArrayParameterLocation_2368::BTInnerArrayParameterLocation_2368()
{
    m_type = utility::conversions::to_string_t("");
    m_typeIsSet = false;
    m_OuterParameterId = utility::conversions::to_string_t("");
    m_OuterParameterIdIsSet = false;
    m_Index = 0;
    m_IndexIsSet = false;
}

BTInnerArrayParameterLocation_2368::~BTInnerArrayParameterLocation_2368()
{
}

void BTInnerArrayParameterLocation_2368::validate()
{
    // TODO: implement validation
}

web::json::value BTInnerArrayParameterLocation_2368::toJson() const
{
    web::json::value val = this->BTInnerParameterLocation_1715::toJson();
    
    if(m_typeIsSet)
    {
        val[utility::conversions::to_string_t("@type")] = ModelBase::toJson(m_type);
    }
    if(m_OuterParameterIdIsSet)
    {
        val[utility::conversions::to_string_t("outerParameterId")] = ModelBase::toJson(m_OuterParameterId);
    }
    if(m_IndexIsSet)
    {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(m_Index);
    }

    return val;
}

bool BTInnerArrayParameterLocation_2368::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTInnerParameterLocation_1715::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("@type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("@type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_@type;
            ok &= ModelBase::fromJson(fieldValue, refVal_@type);
            setType(refVal_@type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outerParameterId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outerParameterId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_outerParameterId;
            ok &= ModelBase::fromJson(fieldValue, refVal_outerParameterId);
            setOuterParameterId(refVal_outerParameterId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_index;
            ok &= ModelBase::fromJson(fieldValue, refVal_index);
            setIndex(refVal_index);
        }
    }
    return ok;
}

void BTInnerArrayParameterLocation_2368::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("@type"), m_type));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_OuterParameterIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("outerParameterId"), m_OuterParameterId));
    }
    if(m_IndexIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("index"), m_Index));
    }
}

bool BTInnerArrayParameterLocation_2368::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("@type")))
    {
        utility::string_t refVal_@type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("@type")), refVal_@type );
        setType(refVal_@type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("outerParameterId")))
    {
        utility::string_t refVal_outerParameterId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("outerParameterId")), refVal_outerParameterId );
        setOuterParameterId(refVal_outerParameterId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("index")))
    {
        int32_t refVal_index;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("index")), refVal_index );
        setIndex(refVal_index);
    }
    return ok;
}

utility::string_t BTInnerArrayParameterLocation_2368::getType() const
{
    return m_type;
}

void BTInnerArrayParameterLocation_2368::setType(const utility::string_t& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool BTInnerArrayParameterLocation_2368::typeIsSet() const
{
    return m_typeIsSet;
}

void BTInnerArrayParameterLocation_2368::unsettype()
{
    m_typeIsSet = false;
}
utility::string_t BTInnerArrayParameterLocation_2368::getOuterParameterId() const
{
    return m_OuterParameterId;
}

void BTInnerArrayParameterLocation_2368::setOuterParameterId(const utility::string_t& value)
{
    m_OuterParameterId = value;
    m_OuterParameterIdIsSet = true;
}

bool BTInnerArrayParameterLocation_2368::outerParameterIdIsSet() const
{
    return m_OuterParameterIdIsSet;
}

void BTInnerArrayParameterLocation_2368::unsetOuterParameterId()
{
    m_OuterParameterIdIsSet = false;
}
int32_t BTInnerArrayParameterLocation_2368::getIndex() const
{
    return m_Index;
}

void BTInnerArrayParameterLocation_2368::setIndex(int32_t value)
{
    m_Index = value;
    m_IndexIsSet = true;
}

bool BTInnerArrayParameterLocation_2368::indexIsSet() const
{
    return m_IndexIsSet;
}

void BTInnerArrayParameterLocation_2368::unsetIndex()
{
    m_IndexIsSet = false;
}
}
}
}
}

