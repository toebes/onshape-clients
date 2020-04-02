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
 * BTPStatementContinue_274.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPStatementContinue_274_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPStatementContinue_274_H_


#include <cpprest/details/basic_types.h>
#include "BTPStatementContinue_274_allOf.h"
#include "BTPSpace_10.h"
#include "BTPAnnotation_231.h"
#include "BTPStatement_269.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPStatementContinue_274
    : public BTPStatement_269
{
public:
    BTPStatementContinue_274();
    virtual ~BTPStatementContinue_274();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPStatementContinue_274 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceAfterContinue() const;
    bool spaceAfterContinueIsSet() const;
    void unsetSpaceAfterContinue();

    void setSpaceAfterContinue(const std::shared_ptr<BTPSpace_10>& value);


protected:
    std::shared_ptr<BTPSpace_10> m_SpaceAfterContinue;
    bool m_SpaceAfterContinueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPStatementContinue_274_H_ */