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
 * BTPExpressionNew_243_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionNew_243_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionNew_243_allOf_H_


#include "../ModelBase.h"

#include "BTPExpression_9.h"
#include <cpprest/details/basic_types.h>
#include "BTPSpace_10.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPExpressionNew_243_allOf
    : public ModelBase
{
public:
    BTPExpressionNew_243_allOf();
    virtual ~BTPExpressionNew_243_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPExpressionNew_243_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceBetweenNewBox() const;
    bool spaceBetweenNewBoxIsSet() const;
    void unsetSpaceBetweenNewBox();

    void setSpaceBetweenNewBox(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceAfterBox() const;
    bool spaceAfterBoxIsSet() const;
    void unsetSpaceAfterBox();

    void setSpaceAfterBox(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPExpression_9> getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const std::shared_ptr<BTPExpression_9>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    std::shared_ptr<BTPSpace_10> m_SpaceBetweenNewBox;
    bool m_SpaceBetweenNewBoxIsSet;
    std::shared_ptr<BTPSpace_10> m_SpaceAfterBox;
    bool m_SpaceAfterBoxIsSet;
    std::shared_ptr<BTPExpression_9> m_Value;
    bool m_ValueIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionNew_243_allOf_H_ */