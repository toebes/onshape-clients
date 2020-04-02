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

/*
 * BTMParameterLookupTablePath_1419.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterLookupTablePath_1419_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterLookupTablePath_1419_H_


#include "BTMParameter_1.h"
#include "BTMParameterLookupTablePath_1419_allOf.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMParameterLookupTablePath_1419
    : public BTMParameter_1
{
public:
    BTMParameterLookupTablePath_1419();
    virtual ~BTMParameterLookupTablePath_1419();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMParameterLookupTablePath_1419 members

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getValue();
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const std::map<utility::string_t, utility::string_t>& value);


protected:
    std::map<utility::string_t, utility::string_t> m_Value;
    bool m_ValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterLookupTablePath_1419_H_ */