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



#include "BTNullableQuantityRange_1340.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTNullableQuantityRange_1340::BTNullableQuantityRange_1340()
{
    m_HasMinValue = false;
    m_HasMinValueIsSet = false;
    m_HasDefaultValue = false;
    m_HasDefaultValueIsSet = false;
    m_HasMaxValue = false;
    m_HasMaxValueIsSet = false;
}

BTNullableQuantityRange_1340::~BTNullableQuantityRange_1340()
{
}

void BTNullableQuantityRange_1340::validate()
{
    // TODO: implement validation
}

web::json::value BTNullableQuantityRange_1340::toJson() const
{
    web::json::value val = this->BTQuantityRange_181::toJson();
    
    if(m_HasMinValueIsSet)
    {
        val[utility::conversions::to_string_t("hasMinValue")] = ModelBase::toJson(m_HasMinValue);
    }
    if(m_HasDefaultValueIsSet)
    {
        val[utility::conversions::to_string_t("hasDefaultValue")] = ModelBase::toJson(m_HasDefaultValue);
    }
    if(m_HasMaxValueIsSet)
    {
        val[utility::conversions::to_string_t("hasMaxValue")] = ModelBase::toJson(m_HasMaxValue);
    }

    return val;
}

bool BTNullableQuantityRange_1340::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTQuantityRange_181::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("hasMinValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hasMinValue"));
        if(!fieldValue.is_null())
        {
            bool refVal_hasMinValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_hasMinValue);
            setHasMinValue(refVal_hasMinValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hasDefaultValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hasDefaultValue"));
        if(!fieldValue.is_null())
        {
            bool refVal_hasDefaultValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_hasDefaultValue);
            setHasDefaultValue(refVal_hasDefaultValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hasMaxValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hasMaxValue"));
        if(!fieldValue.is_null())
        {
            bool refVal_hasMaxValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_hasMaxValue);
            setHasMaxValue(refVal_hasMaxValue);
        }
    }
    return ok;
}

void BTNullableQuantityRange_1340::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DefaultValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultValue"), m_DefaultValue));
    }
    if(m_LocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("location"), m_Location));
    }
    if(m_MaxValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxValue"), m_MaxValue));
    }
    if(m_MinValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("minValue"), m_MinValue));
    }
    if(m_UnitsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("units"), m_Units));
    }
    if(m_HasMinValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hasMinValue"), m_HasMinValue));
    }
    if(m_HasDefaultValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hasDefaultValue"), m_HasDefaultValue));
    }
    if(m_HasMaxValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hasMaxValue"), m_HasMaxValue));
    }
}

bool BTNullableQuantityRange_1340::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("defaultValue")))
    {
        double refVal_defaultValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultValue")), refVal_defaultValue );
        setDefaultValue(refVal_defaultValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("location")))
    {
        std::shared_ptr<BTLocationInfo_226> refVal_location;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("location")), refVal_location );
        setLocation(refVal_location);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxValue")))
    {
        double refVal_maxValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxValue")), refVal_maxValue );
        setMaxValue(refVal_maxValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minValue")))
    {
        double refVal_minValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("minValue")), refVal_minValue );
        setMinValue(refVal_minValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("units")))
    {
        utility::string_t refVal_units;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("units")), refVal_units );
        setUnits(refVal_units);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hasMinValue")))
    {
        bool refVal_hasMinValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hasMinValue")), refVal_hasMinValue );
        setHasMinValue(refVal_hasMinValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hasDefaultValue")))
    {
        bool refVal_hasDefaultValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hasDefaultValue")), refVal_hasDefaultValue );
        setHasDefaultValue(refVal_hasDefaultValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hasMaxValue")))
    {
        bool refVal_hasMaxValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hasMaxValue")), refVal_hasMaxValue );
        setHasMaxValue(refVal_hasMaxValue);
    }
    return ok;
}

bool BTNullableQuantityRange_1340::isHasMinValue() const
{
    return m_HasMinValue;
}

void BTNullableQuantityRange_1340::setHasMinValue(bool value)
{
    m_HasMinValue = value;
    m_HasMinValueIsSet = true;
}

bool BTNullableQuantityRange_1340::hasMinValueIsSet() const
{
    return m_HasMinValueIsSet;
}

void BTNullableQuantityRange_1340::unsetHasMinValue()
{
    m_HasMinValueIsSet = false;
}
bool BTNullableQuantityRange_1340::isHasDefaultValue() const
{
    return m_HasDefaultValue;
}

void BTNullableQuantityRange_1340::setHasDefaultValue(bool value)
{
    m_HasDefaultValue = value;
    m_HasDefaultValueIsSet = true;
}

bool BTNullableQuantityRange_1340::hasDefaultValueIsSet() const
{
    return m_HasDefaultValueIsSet;
}

void BTNullableQuantityRange_1340::unsetHasDefaultValue()
{
    m_HasDefaultValueIsSet = false;
}
bool BTNullableQuantityRange_1340::isHasMaxValue() const
{
    return m_HasMaxValue;
}

void BTNullableQuantityRange_1340::setHasMaxValue(bool value)
{
    m_HasMaxValue = value;
    m_HasMaxValueIsSet = true;
}

bool BTNullableQuantityRange_1340::hasMaxValueIsSet() const
{
    return m_HasMaxValueIsSet;
}

void BTNullableQuantityRange_1340::unsetHasMaxValue()
{
    m_HasMaxValueIsSet = false;
}
}
}
}
}

