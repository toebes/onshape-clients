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
 * BTExportModelArcEdgeGeometry_1257.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelArcEdgeGeometry_1257_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelArcEdgeGeometry_1257_H_


#include "BTExportModelEdgeGeometry_1125.h"
#include <cpprest/details/basic_types.h>
#include "BTExportModelArcEdgeGeometry_1257_allOf.h"
#include "BTVector3d_389.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTExportModelArcEdgeGeometry_1257
    : public BTExportModelEdgeGeometry_1125
{
public:
    BTExportModelArcEdgeGeometry_1257();
    virtual ~BTExportModelArcEdgeGeometry_1257();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTExportModelArcEdgeGeometry_1257 members

    /// <summary>
    /// 
    /// </summary>
    bool isArcIsClockwise() const;
    bool arcIsClockwiseIsSet() const;
    void unsetArcIsClockwise();

    void setArcIsClockwise(bool value);

    /// <summary>
    /// 
    /// </summary>
    double getArcSweep() const;
    bool arcSweepIsSet() const;
    void unsetArcSweep();

    void setArcSweep(double value);


protected:
    bool m_ArcIsClockwise;
    bool m_ArcIsClockwiseIsSet;
    double m_ArcSweep;
    bool m_ArcSweepIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelArcEdgeGeometry_1257_H_ */