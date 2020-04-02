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



#include "BTGlobalTreeNodeListResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTGlobalTreeNodeListResponse::BTGlobalTreeNodeListResponse()
{
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
    m_ItemsIsSet = false;
    m_Next = utility::conversions::to_string_t("");
    m_NextIsSet = false;
    m_Previous = utility::conversions::to_string_t("");
    m_PreviousIsSet = false;
}

BTGlobalTreeNodeListResponse::~BTGlobalTreeNodeListResponse()
{
}

void BTGlobalTreeNodeListResponse::validate()
{
    // TODO: implement validation
}

web::json::value BTGlobalTreeNodeListResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(m_Items);
    }
    if(m_NextIsSet)
    {
        val[utility::conversions::to_string_t("next")] = ModelBase::toJson(m_Next);
    }
    if(m_PreviousIsSet)
    {
        val[utility::conversions::to_string_t("previous")] = ModelBase::toJson(m_Previous);
    }

    return val;
}

bool BTGlobalTreeNodeListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("href")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_href;
            ok &= ModelBase::fromJson(fieldValue, refVal_href);
            setHref(refVal_href);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTGlobalTreeNodeInfo>> refVal_items;
            ok &= ModelBase::fromJson(fieldValue, refVal_items);
            setItems(refVal_items);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_next;
            ok &= ModelBase::fromJson(fieldValue, refVal_next);
            setNext(refVal_next);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("previous")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_previous;
            ok &= ModelBase::fromJson(fieldValue, refVal_previous);
            setPrevious(refVal_previous);
        }
    }
    return ok;
}

void BTGlobalTreeNodeListResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("items"), m_Items));
    }
    if(m_NextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("next"), m_Next));
    }
    if(m_PreviousIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("previous"), m_Previous));
    }
}

bool BTGlobalTreeNodeListResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("href")))
    {
        utility::string_t refVal_href;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("href")), refVal_href );
        setHref(refVal_href);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("items")))
    {
        std::vector<std::shared_ptr<BTGlobalTreeNodeInfo>> refVal_items;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("items")), refVal_items );
        setItems(refVal_items);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("next")))
    {
        utility::string_t refVal_next;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("next")), refVal_next );
        setNext(refVal_next);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("previous")))
    {
        utility::string_t refVal_previous;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("previous")), refVal_previous );
        setPrevious(refVal_previous);
    }
    return ok;
}

utility::string_t BTGlobalTreeNodeListResponse::getHref() const
{
    return m_Href;
}

void BTGlobalTreeNodeListResponse::setHref(const utility::string_t& value)
{
    m_Href = value;
    m_HrefIsSet = true;
}

bool BTGlobalTreeNodeListResponse::hrefIsSet() const
{
    return m_HrefIsSet;
}

void BTGlobalTreeNodeListResponse::unsetHref()
{
    m_HrefIsSet = false;
}
std::vector<std::shared_ptr<BTGlobalTreeNodeInfo>>& BTGlobalTreeNodeListResponse::getItems()
{
    return m_Items;
}

void BTGlobalTreeNodeListResponse::setItems(const std::vector<std::shared_ptr<BTGlobalTreeNodeInfo>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool BTGlobalTreeNodeListResponse::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void BTGlobalTreeNodeListResponse::unsetItems()
{
    m_ItemsIsSet = false;
}
utility::string_t BTGlobalTreeNodeListResponse::getNext() const
{
    return m_Next;
}

void BTGlobalTreeNodeListResponse::setNext(const utility::string_t& value)
{
    m_Next = value;
    m_NextIsSet = true;
}

bool BTGlobalTreeNodeListResponse::nextIsSet() const
{
    return m_NextIsSet;
}

void BTGlobalTreeNodeListResponse::unsetNext()
{
    m_NextIsSet = false;
}
utility::string_t BTGlobalTreeNodeListResponse::getPrevious() const
{
    return m_Previous;
}

void BTGlobalTreeNodeListResponse::setPrevious(const utility::string_t& value)
{
    m_Previous = value;
    m_PreviousIsSet = true;
}

bool BTGlobalTreeNodeListResponse::previousIsSet() const
{
    return m_PreviousIsSet;
}

void BTGlobalTreeNodeListResponse::unsetPrevious()
{
    m_PreviousIsSet = false;
}
}
}
}
}

