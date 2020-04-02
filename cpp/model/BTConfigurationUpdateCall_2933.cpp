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



#include "BTConfigurationUpdateCall_2933.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTConfigurationUpdateCall_2933::BTConfigurationUpdateCall_2933()
{
    m_ConfigurationParametersIsSet = false;
    m_CurrentConfigurationIsSet = false;
}

BTConfigurationUpdateCall_2933::~BTConfigurationUpdateCall_2933()
{
}

void BTConfigurationUpdateCall_2933::validate()
{
    // TODO: implement validation
}

web::json::value BTConfigurationUpdateCall_2933::toJson() const
{
    web::json::value val = this->BTFeatureApiBase_1430::toJson();
    
    if(m_ConfigurationParametersIsSet)
    {
        val[utility::conversions::to_string_t("configurationParameters")] = ModelBase::toJson(m_ConfigurationParameters);
    }
    if(m_CurrentConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("currentConfiguration")] = ModelBase::toJson(m_CurrentConfiguration);
    }

    return val;
}

bool BTConfigurationUpdateCall_2933::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTFeatureApiBase_1430::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("configurationParameters")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurationParameters"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMConfigurationParameter_819>> refVal_configurationParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_configurationParameters);
            setConfigurationParameters(refVal_configurationParameters);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currentConfiguration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentConfiguration"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMParameter_1>> refVal_currentConfiguration;
            ok &= ModelBase::fromJson(fieldValue, refVal_currentConfiguration);
            setCurrentConfiguration(refVal_currentConfiguration);
        }
    }
    return ok;
}

void BTConfigurationUpdateCall_2933::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_LibraryVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("libraryVersion"), m_LibraryVersion));
    }
    if(m_MicroversionSkewIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("microversionSkew"), m_MicroversionSkew));
    }
    if(m_RejectMicroversionSkewIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rejectMicroversionSkew"), m_RejectMicroversionSkew));
    }
    if(m_SerializationVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("serializationVersion"), m_SerializationVersion));
    }
    if(m_SourceMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sourceMicroversion"), m_SourceMicroversion));
    }
    if(m_ConfigurationParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("configurationParameters"), m_ConfigurationParameters));
    }
    if(m_CurrentConfigurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currentConfiguration"), m_CurrentConfiguration));
    }
}

bool BTConfigurationUpdateCall_2933::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("libraryVersion")))
    {
        int32_t refVal_libraryVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("libraryVersion")), refVal_libraryVersion );
        setLibraryVersion(refVal_libraryVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("microversionSkew")))
    {
        bool refVal_microversionSkew;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("microversionSkew")), refVal_microversionSkew );
        setMicroversionSkew(refVal_microversionSkew);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rejectMicroversionSkew")))
    {
        bool refVal_rejectMicroversionSkew;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rejectMicroversionSkew")), refVal_rejectMicroversionSkew );
        setRejectMicroversionSkew(refVal_rejectMicroversionSkew);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("serializationVersion")))
    {
        utility::string_t refVal_serializationVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("serializationVersion")), refVal_serializationVersion );
        setSerializationVersion(refVal_serializationVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sourceMicroversion")))
    {
        utility::string_t refVal_sourceMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sourceMicroversion")), refVal_sourceMicroversion );
        setSourceMicroversion(refVal_sourceMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("configurationParameters")))
    {
        std::vector<std::shared_ptr<BTMConfigurationParameter_819>> refVal_configurationParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("configurationParameters")), refVal_configurationParameters );
        setConfigurationParameters(refVal_configurationParameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currentConfiguration")))
    {
        std::vector<std::shared_ptr<BTMParameter_1>> refVal_currentConfiguration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("currentConfiguration")), refVal_currentConfiguration );
        setCurrentConfiguration(refVal_currentConfiguration);
    }
    return ok;
}

std::vector<std::shared_ptr<BTMConfigurationParameter_819>>& BTConfigurationUpdateCall_2933::getConfigurationParameters()
{
    return m_ConfigurationParameters;
}

void BTConfigurationUpdateCall_2933::setConfigurationParameters(const std::vector<std::shared_ptr<BTMConfigurationParameter_819>>& value)
{
    m_ConfigurationParameters = value;
    m_ConfigurationParametersIsSet = true;
}

bool BTConfigurationUpdateCall_2933::configurationParametersIsSet() const
{
    return m_ConfigurationParametersIsSet;
}

void BTConfigurationUpdateCall_2933::unsetConfigurationParameters()
{
    m_ConfigurationParametersIsSet = false;
}
std::vector<std::shared_ptr<BTMParameter_1>>& BTConfigurationUpdateCall_2933::getCurrentConfiguration()
{
    return m_CurrentConfiguration;
}

void BTConfigurationUpdateCall_2933::setCurrentConfiguration(const std::vector<std::shared_ptr<BTMParameter_1>>& value)
{
    m_CurrentConfiguration = value;
    m_CurrentConfigurationIsSet = true;
}

bool BTConfigurationUpdateCall_2933::currentConfigurationIsSet() const
{
    return m_CurrentConfigurationIsSet;
}

void BTConfigurationUpdateCall_2933::unsetCurrentConfiguration()
{
    m_CurrentConfigurationIsSet = false;
}
}
}
}
}

