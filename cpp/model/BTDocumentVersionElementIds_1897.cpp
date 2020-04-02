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



#include "BTDocumentVersionElementIds_1897.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTDocumentVersionElementIds_1897::BTDocumentVersionElementIds_1897()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_DocumentId = utility::conversions::to_string_t("");
    m_DocumentIdIsSet = false;
    m_ElementId = utility::conversions::to_string_t("");
    m_ElementIdIsSet = false;
    m_VersionId = utility::conversions::to_string_t("");
    m_VersionIdIsSet = false;
}

BTDocumentVersionElementIds_1897::~BTDocumentVersionElementIds_1897()
{
}

void BTDocumentVersionElementIds_1897::validate()
{
    // TODO: implement validation
}

web::json::value BTDocumentVersionElementIds_1897::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_DocumentIdIsSet)
    {
        val[utility::conversions::to_string_t("documentId")] = ModelBase::toJson(m_DocumentId);
    }
    if(m_ElementIdIsSet)
    {
        val[utility::conversions::to_string_t("elementId")] = ModelBase::toJson(m_ElementId);
    }
    if(m_VersionIdIsSet)
    {
        val[utility::conversions::to_string_t("versionId")] = ModelBase::toJson(m_VersionId);
    }

    return val;
}

bool BTDocumentVersionElementIds_1897::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("documentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentId);
            setDocumentId(refVal_documentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elementId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elementId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_elementId;
            ok &= ModelBase::fromJson(fieldValue, refVal_elementId);
            setElementId(refVal_elementId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("versionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versionId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_versionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_versionId);
            setVersionId(refVal_versionId);
        }
    }
    return ok;
}

void BTDocumentVersionElementIds_1897::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DocumentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentId"), m_DocumentId));
    }
    if(m_ElementIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("elementId"), m_ElementId));
    }
    if(m_VersionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("versionId"), m_VersionId));
    }
}

bool BTDocumentVersionElementIds_1897::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("documentId")))
    {
        utility::string_t refVal_documentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentId")), refVal_documentId );
        setDocumentId(refVal_documentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("elementId")))
    {
        utility::string_t refVal_elementId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("elementId")), refVal_elementId );
        setElementId(refVal_elementId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("versionId")))
    {
        utility::string_t refVal_versionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("versionId")), refVal_versionId );
        setVersionId(refVal_versionId);
    }
    return ok;
}

utility::string_t BTDocumentVersionElementIds_1897::getBtType() const
{
    return m_BtType;
}

void BTDocumentVersionElementIds_1897::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTDocumentVersionElementIds_1897::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTDocumentVersionElementIds_1897::unsetBtType()
{
    m_BtTypeIsSet = false;
}
utility::string_t BTDocumentVersionElementIds_1897::getDocumentId() const
{
    return m_DocumentId;
}

void BTDocumentVersionElementIds_1897::setDocumentId(const utility::string_t& value)
{
    m_DocumentId = value;
    m_DocumentIdIsSet = true;
}

bool BTDocumentVersionElementIds_1897::documentIdIsSet() const
{
    return m_DocumentIdIsSet;
}

void BTDocumentVersionElementIds_1897::unsetDocumentId()
{
    m_DocumentIdIsSet = false;
}
utility::string_t BTDocumentVersionElementIds_1897::getElementId() const
{
    return m_ElementId;
}

void BTDocumentVersionElementIds_1897::setElementId(const utility::string_t& value)
{
    m_ElementId = value;
    m_ElementIdIsSet = true;
}

bool BTDocumentVersionElementIds_1897::elementIdIsSet() const
{
    return m_ElementIdIsSet;
}

void BTDocumentVersionElementIds_1897::unsetElementId()
{
    m_ElementIdIsSet = false;
}
utility::string_t BTDocumentVersionElementIds_1897::getVersionId() const
{
    return m_VersionId;
}

void BTDocumentVersionElementIds_1897::setVersionId(const utility::string_t& value)
{
    m_VersionId = value;
    m_VersionIdIsSet = true;
}

bool BTDocumentVersionElementIds_1897::versionIdIsSet() const
{
    return m_VersionIdIsSet;
}

void BTDocumentVersionElementIds_1897::unsetVersionId()
{
    m_VersionIdIsSet = false;
}
}
}
}
}

