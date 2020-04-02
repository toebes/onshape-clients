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
 * BTFeatureListResponse_2457_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTFeatureListResponse_2457_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTFeatureListResponse_2457_allOf_H_


#include "../ModelBase.h"

#include "BTMImport_136.h"
#include <cpprest/details/basic_types.h>
#include "BTFeatureState_1688.h"
#include "BTMFeature_134.h"
#include <map>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTFeatureListResponse_2457_allOf
    : public ModelBase
{
public:
    BTFeatureListResponse_2457_allOf();
    virtual ~BTFeatureListResponse_2457_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTFeatureListResponse_2457_allOf members

    /// <summary>
    /// 
    /// </summary>
    int32_t getRollbackIndex() const;
    bool rollbackIndexIsSet() const;
    void unsetRollbackIndex();

    void setRollbackIndex(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMFeature_134>>& getFeatures();
    bool featuresIsSet() const;
    void unsetFeatures();

    void setFeatures(const std::vector<std::shared_ptr<BTMFeature_134>>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsComplete() const;
    bool isCompleteIsSet() const;
    void unsetIsComplete();

    void setIsComplete(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>>& getFeatureStates();
    bool featureStatesIsSet() const;
    void unsetFeatureStates();

    void setFeatureStates(const std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMFeature_134>>& getDefaultFeatures();
    bool defaultFeaturesIsSet() const;
    void unsetDefaultFeatures();

    void setDefaultFeatures(const std::vector<std::shared_ptr<BTMFeature_134>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMImport_136>>& getImports();
    bool importsIsSet() const;
    void unsetImports();

    void setImports(const std::vector<std::shared_ptr<BTMImport_136>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    int32_t m_RollbackIndex;
    bool m_RollbackIndexIsSet;
    std::vector<std::shared_ptr<BTMFeature_134>> m_Features;
    bool m_FeaturesIsSet;
    bool m_IsComplete;
    bool m_IsCompleteIsSet;
    std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>> m_FeatureStates;
    bool m_FeatureStatesIsSet;
    std::vector<std::shared_ptr<BTMFeature_134>> m_DefaultFeatures;
    bool m_DefaultFeaturesIsSet;
    std::vector<std::shared_ptr<BTMImport_136>> m_Imports;
    bool m_ImportsIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTFeatureListResponse_2457_allOf_H_ */