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



#include "BTConfiguredFeatureColumnInfo_1014_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTConfiguredFeatureColumnInfo_1014_allOf::BTConfiguredFeatureColumnInfo_1014_allOf()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTConfiguredFeatureColumnInfo_1014_allOf::~BTConfiguredFeatureColumnInfo_1014_allOf()
{
}

void BTConfiguredFeatureColumnInfo_1014_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTConfiguredFeatureColumnInfo_1014_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTConfiguredFeatureColumnInfo_1014_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTConfiguredFeatureColumnInfo_1014_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool BTConfiguredFeatureColumnInfo_1014_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

utility::string_t BTConfiguredFeatureColumnInfo_1014_allOf::getBtType() const
{
    return m_BtType;
}

void BTConfiguredFeatureColumnInfo_1014_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTConfiguredFeatureColumnInfo_1014_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTConfiguredFeatureColumnInfo_1014_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

