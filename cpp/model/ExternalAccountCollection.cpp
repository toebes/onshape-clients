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



#include "ExternalAccountCollection.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ExternalAccountCollection::ExternalAccountCollection()
{
    m_Count = 0;
    m_CountIsSet = false;
    m_DataIsSet = false;
    m_HasMore = false;
    m_HasMoreIsSet = false;
    m_RequestOptionsIsSet = false;
    m_RequestParamsIsSet = false;
    m_TotalCount = 0;
    m_TotalCountIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
}

ExternalAccountCollection::~ExternalAccountCollection()
{
}

void ExternalAccountCollection::validate()
{
    // TODO: implement validation
}

web::json::value ExternalAccountCollection::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(m_Count);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }
    if(m_HasMoreIsSet)
    {
        val[utility::conversions::to_string_t("hasMore")] = ModelBase::toJson(m_HasMore);
    }
    if(m_RequestOptionsIsSet)
    {
        val[utility::conversions::to_string_t("requestOptions")] = ModelBase::toJson(m_RequestOptions);
    }
    if(m_RequestParamsIsSet)
    {
        val[utility::conversions::to_string_t("requestParams")] = ModelBase::toJson(m_RequestParams);
    }
    if(m_TotalCountIsSet)
    {
        val[utility::conversions::to_string_t("totalCount")] = ModelBase::toJson(m_TotalCount);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }

    return val;
}

bool ExternalAccountCollection::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_count;
            ok &= ModelBase::fromJson(fieldValue, refVal_count);
            setCount(refVal_count);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ExternalAccount>> refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hasMore")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hasMore"));
        if(!fieldValue.is_null())
        {
            bool refVal_hasMore;
            ok &= ModelBase::fromJson(fieldValue, refVal_hasMore);
            setHasMore(refVal_hasMore);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("requestOptions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requestOptions"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RequestOptions> refVal_requestOptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_requestOptions);
            setRequestOptions(refVal_requestOptions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("requestParams")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requestParams"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<Object>> refVal_requestParams;
            ok &= ModelBase::fromJson(fieldValue, refVal_requestParams);
            setRequestParams(refVal_requestParams);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_totalCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_totalCount);
            setTotalCount(refVal_totalCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    return ok;
}

void ExternalAccountCollection::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("count"), m_Count));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
    if(m_HasMoreIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hasMore"), m_HasMore));
    }
    if(m_RequestOptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("requestOptions"), m_RequestOptions));
    }
    if(m_RequestParamsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("requestParams"), m_RequestParams));
    }
    if(m_TotalCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("totalCount"), m_TotalCount));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
}

bool ExternalAccountCollection::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("count")))
    {
        int32_t refVal_count;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("count")), refVal_count );
        setCount(refVal_count);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        std::vector<std::shared_ptr<ExternalAccount>> refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hasMore")))
    {
        bool refVal_hasMore;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hasMore")), refVal_hasMore );
        setHasMore(refVal_hasMore);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("requestOptions")))
    {
        std::shared_ptr<RequestOptions> refVal_requestOptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("requestOptions")), refVal_requestOptions );
        setRequestOptions(refVal_requestOptions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("requestParams")))
    {
        std::map<utility::string_t, std::shared_ptr<Object>> refVal_requestParams;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("requestParams")), refVal_requestParams );
        setRequestParams(refVal_requestParams);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("totalCount")))
    {
        int32_t refVal_totalCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("totalCount")), refVal_totalCount );
        setTotalCount(refVal_totalCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    return ok;
}

int32_t ExternalAccountCollection::getCount() const
{
    return m_Count;
}

void ExternalAccountCollection::setCount(int32_t value)
{
    m_Count = value;
    m_CountIsSet = true;
}

bool ExternalAccountCollection::countIsSet() const
{
    return m_CountIsSet;
}

void ExternalAccountCollection::unsetCount()
{
    m_CountIsSet = false;
}
std::vector<std::shared_ptr<ExternalAccount>>& ExternalAccountCollection::getData()
{
    return m_Data;
}

void ExternalAccountCollection::setData(const std::vector<std::shared_ptr<ExternalAccount>>& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool ExternalAccountCollection::dataIsSet() const
{
    return m_DataIsSet;
}

void ExternalAccountCollection::unsetData()
{
    m_DataIsSet = false;
}
bool ExternalAccountCollection::isHasMore() const
{
    return m_HasMore;
}

void ExternalAccountCollection::setHasMore(bool value)
{
    m_HasMore = value;
    m_HasMoreIsSet = true;
}

bool ExternalAccountCollection::hasMoreIsSet() const
{
    return m_HasMoreIsSet;
}

void ExternalAccountCollection::unsetHasMore()
{
    m_HasMoreIsSet = false;
}
std::shared_ptr<RequestOptions> ExternalAccountCollection::getRequestOptions() const
{
    return m_RequestOptions;
}

void ExternalAccountCollection::setRequestOptions(const std::shared_ptr<RequestOptions>& value)
{
    m_RequestOptions = value;
    m_RequestOptionsIsSet = true;
}

bool ExternalAccountCollection::requestOptionsIsSet() const
{
    return m_RequestOptionsIsSet;
}

void ExternalAccountCollection::unsetRequestOptions()
{
    m_RequestOptionsIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<Object>>& ExternalAccountCollection::getRequestParams()
{
    return m_RequestParams;
}

void ExternalAccountCollection::setRequestParams(const std::map<utility::string_t, std::shared_ptr<Object>>& value)
{
    m_RequestParams = value;
    m_RequestParamsIsSet = true;
}

bool ExternalAccountCollection::requestParamsIsSet() const
{
    return m_RequestParamsIsSet;
}

void ExternalAccountCollection::unsetRequestParams()
{
    m_RequestParamsIsSet = false;
}
int32_t ExternalAccountCollection::getTotalCount() const
{
    return m_TotalCount;
}

void ExternalAccountCollection::setTotalCount(int32_t value)
{
    m_TotalCount = value;
    m_TotalCountIsSet = true;
}

bool ExternalAccountCollection::totalCountIsSet() const
{
    return m_TotalCountIsSet;
}

void ExternalAccountCollection::unsetTotalCount()
{
    m_TotalCountIsSet = false;
}
utility::string_t ExternalAccountCollection::getUrl() const
{
    return m_Url;
}

void ExternalAccountCollection::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool ExternalAccountCollection::urlIsSet() const
{
    return m_UrlIsSet;
}

void ExternalAccountCollection::unsetUrl()
{
    m_UrlIsSet = false;
}
}
}
}
}

