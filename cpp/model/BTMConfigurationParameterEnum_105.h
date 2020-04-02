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
 * BTMConfigurationParameterEnum_105.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfigurationParameterEnum_105_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfigurationParameterEnum_105_H_


#include "BTTreeNode_20.h"
#include <cpprest/details/basic_types.h>
#include "BTMConfigurationParameter_819.h"
#include <vector>
#include "BTMConfigurationParameterEnum_105_allOf.h"
#include "BTMEnumOption_592.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMConfigurationParameterEnum_105
    : public BTMConfigurationParameter_819
{
public:
    BTMConfigurationParameterEnum_105();
    virtual ~BTMConfigurationParameterEnum_105();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMConfigurationParameterEnum_105 members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getOptionIds();
    bool optionIdsIsSet() const;
    void unsetOptionIds();

    void setOptionIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnumName() const;
    bool enumNameIsSet() const;
    void unsetEnumName();

    void setEnumName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMEnumOption_592>>& getOptions();
    bool optionsIsSet() const;
    void unsetOptions();

    void setOptions(const std::vector<std::shared_ptr<BTMEnumOption_592>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRNamespace() const;
    bool rNamespaceIsSet() const;
    void unsetr_namespace();

    void setRNamespace(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetDefaultValue();

    void setDefaultValue(const utility::string_t& value);


protected:
    std::vector<utility::string_t> m_OptionIds;
    bool m_OptionIdsIsSet;
    utility::string_t m_EnumName;
    bool m_EnumNameIsSet;
    std::vector<std::shared_ptr<BTMEnumOption_592>> m_Options;
    bool m_OptionsIsSet;
    utility::string_t m_r_namespace;
    bool m_r_namespaceIsSet;
    utility::string_t m_DefaultValue;
    bool m_DefaultValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfigurationParameterEnum_105_H_ */