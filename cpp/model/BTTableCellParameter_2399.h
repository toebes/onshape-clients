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
 * BTTableCellParameter_2399.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCellParameter_2399_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCellParameter_2399_H_


#include "BTMParameter_1.h"
#include "BTTableCellParameter_2399_allOf.h"
#include "BTTableCell_1114.h"
#include <cpprest/details/basic_types.h>
#include "BTParameterSpec_6.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTTableCellParameter_2399
    : public BTTableCell_1114
{
public:
    BTTableCellParameter_2399();
    virtual ~BTTableCellParameter_2399();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTTableCellParameter_2399 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getError() const;
    bool errorIsSet() const;
    void unsetError();

    void setError(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTParameterSpec_6> getOverrideSpec() const;
    bool overrideSpecIsSet() const;
    void unsetOverrideSpec();

    void setOverrideSpec(const std::shared_ptr<BTParameterSpec_6>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMParameter_1> getParameter() const;
    bool parameterIsSet() const;
    void unsetParameter();

    void setParameter(const std::shared_ptr<BTMParameter_1>& value);


protected:
    utility::string_t m_Error;
    bool m_ErrorIsSet;
    std::shared_ptr<BTParameterSpec_6> m_OverrideSpec;
    bool m_OverrideSpecIsSet;
    std::shared_ptr<BTMParameter_1> m_Parameter;
    bool m_ParameterIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCellParameter_2399_H_ */