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
 * BTMFeatureQueryWithOccurrence_157.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMFeatureQueryWithOccurrence_157_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMFeatureQueryWithOccurrence_157_H_


#include "BTMFeatureQueryWithOccurrence_157_allOf.h"
#include "BTMIndividualQueryWithOccurrenceBase_904.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "BTMIndividualQueryBase_139.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMFeatureQueryWithOccurrence_157
    : public BTMIndividualQueryWithOccurrenceBase_904
{
public:
    BTMFeatureQueryWithOccurrence_157();
    virtual ~BTMFeatureQueryWithOccurrence_157();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMFeatureQueryWithOccurrence_157 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFeatureIdWithOccurrence() const;
    bool featureIdWithOccurrenceIsSet() const;
    void unsetFeatureIdWithOccurrence();

    void setFeatureIdWithOccurrence(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isPartStudioMateConnectorQuery() const;
    bool partStudioMateConnectorQueryIsSet() const;
    void unsetPartStudioMateConnectorQuery();

    void setPartStudioMateConnectorQuery(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFeatureId() const;
    bool featureIdIsSet() const;
    void unsetFeatureId();

    void setFeatureId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQueryData() const;
    bool queryDataIsSet() const;
    void unsetQueryData();

    void setQueryData(const utility::string_t& value);


protected:
    utility::string_t m_FeatureIdWithOccurrence;
    bool m_FeatureIdWithOccurrenceIsSet;
    bool m_PartStudioMateConnectorQuery;
    bool m_PartStudioMateConnectorQueryIsSet;
    utility::string_t m_FeatureId;
    bool m_FeatureIdIsSet;
    utility::string_t m_QueryData;
    bool m_QueryDataIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMFeatureQueryWithOccurrence_157_H_ */