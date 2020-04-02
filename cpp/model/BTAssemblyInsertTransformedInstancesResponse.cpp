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



#include "BTAssemblyInsertTransformedInstancesResponse.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAssemblyInsertTransformedInstancesResponse::BTAssemblyInsertTransformedInstancesResponse()
{
    m_InsertResponsesIsSet = false;
}

BTAssemblyInsertTransformedInstancesResponse::~BTAssemblyInsertTransformedInstancesResponse()
{
}

void BTAssemblyInsertTransformedInstancesResponse::validate()
{
    // TODO: implement validation
}

web::json::value BTAssemblyInsertTransformedInstancesResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InsertResponsesIsSet)
    {
        val[utility::conversions::to_string_t("insertResponses")] = ModelBase::toJson(m_InsertResponses);
    }

    return val;
}

bool BTAssemblyInsertTransformedInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("insertResponses")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insertResponses"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTAssemblyOccurrenceInfo>> refVal_insertResponses;
            ok &= ModelBase::fromJson(fieldValue, refVal_insertResponses);
            setInsertResponses(refVal_insertResponses);
        }
    }
    return ok;
}

void BTAssemblyInsertTransformedInstancesResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_InsertResponsesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("insertResponses"), m_InsertResponses));
    }
}

bool BTAssemblyInsertTransformedInstancesResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("insertResponses")))
    {
        std::vector<std::shared_ptr<BTAssemblyOccurrenceInfo>> refVal_insertResponses;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("insertResponses")), refVal_insertResponses );
        setInsertResponses(refVal_insertResponses);
    }
    return ok;
}

std::vector<std::shared_ptr<BTAssemblyOccurrenceInfo>>& BTAssemblyInsertTransformedInstancesResponse::getInsertResponses()
{
    return m_InsertResponses;
}

void BTAssemblyInsertTransformedInstancesResponse::setInsertResponses(const std::vector<std::shared_ptr<BTAssemblyOccurrenceInfo>>& value)
{
    m_InsertResponses = value;
    m_InsertResponsesIsSet = true;
}

bool BTAssemblyInsertTransformedInstancesResponse::insertResponsesIsSet() const
{
    return m_InsertResponsesIsSet;
}

void BTAssemblyInsertTransformedInstancesResponse::unsetInsertResponses()
{
    m_InsertResponsesIsSet = false;
}
}
}
}
}

