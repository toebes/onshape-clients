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
 * BTTorusDescription_1834.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTTorusDescription_1834_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTTorusDescription_1834_H_


#include "BTSurfaceDescription_1564.h"
#include <cpprest/details/basic_types.h>
#include "BTTorusDescription_1834_allOf.h"
#include "BTVector3d_389.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTTorusDescription_1834
    : public BTSurfaceDescription_1564
{
public:
    BTTorusDescription_1834();
    virtual ~BTTorusDescription_1834();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTTorusDescription_1834 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getAxis() const;
    bool axisIsSet() const;
    void unsetAxis();

    void setAxis(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    double getMajorRadius() const;
    bool majorRadiusIsSet() const;
    void unsetMajorRadius();

    void setMajorRadius(double value);

    /// <summary>
    /// 
    /// </summary>
    double getMinorRadius() const;
    bool minorRadiusIsSet() const;
    void unsetMinorRadius();

    void setMinorRadius(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getOrigin() const;
    bool originIsSet() const;
    void unsetOrigin();

    void setOrigin(const std::shared_ptr<BTVector3d_389>& value);


protected:
    std::shared_ptr<BTVector3d_389> m_Axis;
    bool m_AxisIsSet;
    double m_MajorRadius;
    bool m_MajorRadiusIsSet;
    double m_MinorRadius;
    bool m_MinorRadiusIsSet;
    std::shared_ptr<BTVector3d_389> m_Origin;
    bool m_OriginIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTTorusDescription_1834_H_ */