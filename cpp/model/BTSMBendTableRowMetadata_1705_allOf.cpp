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



#include "BTSMBendTableRowMetadata_1705_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTSMBendTableRowMetadata_1705_allOf::BTSMBendTableRowMetadata_1705_allOf()
{
    m_IsJointTypeEditable = false;
    m_IsJointTypeEditableIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTSMBendTableRowMetadata_1705_allOf::~BTSMBendTableRowMetadata_1705_allOf()
{
}

void BTSMBendTableRowMetadata_1705_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTSMBendTableRowMetadata_1705_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IsJointTypeEditableIsSet)
    {
        val[utility::conversions::to_string_t("isJointTypeEditable")] = ModelBase::toJson(m_IsJointTypeEditable);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTSMBendTableRowMetadata_1705_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isJointTypeEditable")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isJointTypeEditable"));
        if(!fieldValue.is_null())
        {
            bool refVal_isJointTypeEditable;
            ok &= ModelBase::fromJson(fieldValue, refVal_isJointTypeEditable);
            setIsJointTypeEditable(refVal_isJointTypeEditable);
        }
    }
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

void BTSMBendTableRowMetadata_1705_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IsJointTypeEditableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isJointTypeEditable"), m_IsJointTypeEditable));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTSMBendTableRowMetadata_1705_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("isJointTypeEditable")))
    {
        bool refVal_isJointTypeEditable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isJointTypeEditable")), refVal_isJointTypeEditable );
        setIsJointTypeEditable(refVal_isJointTypeEditable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

bool BTSMBendTableRowMetadata_1705_allOf::isIsJointTypeEditable() const
{
    return m_IsJointTypeEditable;
}

void BTSMBendTableRowMetadata_1705_allOf::setIsJointTypeEditable(bool value)
{
    m_IsJointTypeEditable = value;
    m_IsJointTypeEditableIsSet = true;
}

bool BTSMBendTableRowMetadata_1705_allOf::isJointTypeEditableIsSet() const
{
    return m_IsJointTypeEditableIsSet;
}

void BTSMBendTableRowMetadata_1705_allOf::unsetIsJointTypeEditable()
{
    m_IsJointTypeEditableIsSet = false;
}
utility::string_t BTSMBendTableRowMetadata_1705_allOf::getBtType() const
{
    return m_BtType;
}

void BTSMBendTableRowMetadata_1705_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTSMBendTableRowMetadata_1705_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTSMBendTableRowMetadata_1705_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

