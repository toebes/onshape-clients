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
 * BTVersionInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTVersionInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTVersionInfo_H_


#include "BTVersionInfo_allOf.h"
#include "BTVersionInfo.h"
#include "BTVersionInfoBase.h"
#include "BTThumbnailInfo.h"
#include <cpprest/details/basic_types.h>
#include "BTUserBasicSummaryInfo.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTVersionInfo
    : public BTVersionInfoBase
{
public:
    BTVersionInfo();
    virtual ~BTVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTVersionInfo members

    /// <summary>
    /// 
    /// </summary>
    int32_t getPurpose() const;
    bool purposeIsSet() const;
    void unsetPurpose();

    void setPurpose(int32_t value);


protected:
    int32_t m_Purpose;
    bool m_PurposeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTVersionInfo_H_ */