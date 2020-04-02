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



#include "BTExternalReference_1936_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTExternalReference_1936_allOf::BTExternalReference_1936_allOf()
{
    m_DocumentVersionId = utility::conversions::to_string_t("");
    m_DocumentVersionIdIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTExternalReference_1936_allOf::~BTExternalReference_1936_allOf()
{
}

void BTExternalReference_1936_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTExternalReference_1936_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DocumentVersionIdIsSet)
    {
        val[utility::conversions::to_string_t("documentVersionId")] = ModelBase::toJson(m_DocumentVersionId);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTExternalReference_1936_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("documentVersionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentVersionId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentVersionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentVersionId);
            setDocumentVersionId(refVal_documentVersionId);
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

void BTExternalReference_1936_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DocumentVersionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentVersionId"), m_DocumentVersionId));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTExternalReference_1936_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("documentVersionId")))
    {
        utility::string_t refVal_documentVersionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentVersionId")), refVal_documentVersionId );
        setDocumentVersionId(refVal_documentVersionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTExternalReference_1936_allOf::getDocumentVersionId() const
{
    return m_DocumentVersionId;
}

void BTExternalReference_1936_allOf::setDocumentVersionId(const utility::string_t& value)
{
    m_DocumentVersionId = value;
    m_DocumentVersionIdIsSet = true;
}

bool BTExternalReference_1936_allOf::documentVersionIdIsSet() const
{
    return m_DocumentVersionIdIsSet;
}

void BTExternalReference_1936_allOf::unsetDocumentVersionId()
{
    m_DocumentVersionIdIsSet = false;
}
utility::string_t BTExternalReference_1936_allOf::getBtType() const
{
    return m_BtType;
}

void BTExternalReference_1936_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTExternalReference_1936_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTExternalReference_1936_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

