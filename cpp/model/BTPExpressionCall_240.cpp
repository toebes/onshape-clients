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



#include "BTPExpressionCall_240.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPExpressionCall_240::BTPExpressionCall_240()
{
    m_FunctionNameString = utility::conversions::to_string_t("");
    m_FunctionNameStringIsSet = false;
    m_FunctionNameIsSet = false;
    m_FunctionExpressionIsSet = false;
    m_SpaceInEmptyListIsSet = false;
}

BTPExpressionCall_240::~BTPExpressionCall_240()
{
}

void BTPExpressionCall_240::validate()
{
    // TODO: implement validation
}

web::json::value BTPExpressionCall_240::toJson() const
{
    web::json::value val = this->BTPExpression_9::toJson();
    
    if(m_FunctionNameStringIsSet)
    {
        val[utility::conversions::to_string_t("functionNameString")] = ModelBase::toJson(m_FunctionNameString);
    }
    if(m_FunctionNameIsSet)
    {
        val[utility::conversions::to_string_t("functionName")] = ModelBase::toJson(m_FunctionName);
    }
    if(m_FunctionExpressionIsSet)
    {
        val[utility::conversions::to_string_t("functionExpression")] = ModelBase::toJson(m_FunctionExpression);
    }
    if(m_SpaceInEmptyListIsSet)
    {
        val[utility::conversions::to_string_t("spaceInEmptyList")] = ModelBase::toJson(m_SpaceInEmptyList);
    }

    return val;
}

bool BTPExpressionCall_240::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTPExpression_9::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("functionNameString")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functionNameString"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_functionNameString;
            ok &= ModelBase::fromJson(fieldValue, refVal_functionNameString);
            setFunctionNameString(refVal_functionNameString);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("functionName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functionName"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPName_261> refVal_functionName;
            ok &= ModelBase::fromJson(fieldValue, refVal_functionName);
            setFunctionName(refVal_functionName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("functionExpression")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functionExpression"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPExpression_9> refVal_functionExpression;
            ok &= ModelBase::fromJson(fieldValue, refVal_functionExpression);
            setFunctionExpression(refVal_functionExpression);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spaceInEmptyList")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spaceInEmptyList"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPSpace_10> refVal_spaceInEmptyList;
            ok &= ModelBase::fromJson(fieldValue, refVal_spaceInEmptyList);
            setSpaceInEmptyList(refVal_spaceInEmptyList);
        }
    }
    return ok;
}

void BTPExpressionCall_240::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AtomicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("atomic"), m_Atomic));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_DocumentationTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentationType"), m_DocumentationType));
    }
    if(m_EndSourceLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endSourceLocation"), m_EndSourceLocation));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ShortDescriptorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shortDescriptor"), m_ShortDescriptor));
    }
    if(m_SpaceAfterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfter"), m_SpaceAfter));
    }
    if(m_SpaceBeforeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceBefore"), m_SpaceBefore));
    }
    if(m_SpaceDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceDefault"), m_SpaceDefault));
    }
    if(m_StartSourceLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startSourceLocation"), m_StartSourceLocation));
    }
    if(m_FunctionNameStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("functionNameString"), m_FunctionNameString));
    }
    if(m_FunctionNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("functionName"), m_FunctionName));
    }
    if(m_FunctionExpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("functionExpression"), m_FunctionExpression));
    }
    if(m_SpaceInEmptyListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceInEmptyList"), m_SpaceInEmptyList));
    }
}

bool BTPExpressionCall_240::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("atomic")))
    {
        bool refVal_atomic;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("atomic")), refVal_atomic );
        setAtomic(refVal_atomic);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentationType")))
    {
        utility::string_t refVal_documentationType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentationType")), refVal_documentationType );
        setDocumentationType(refVal_documentationType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endSourceLocation")))
    {
        int32_t refVal_endSourceLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("endSourceLocation")), refVal_endSourceLocation );
        setEndSourceLocation(refVal_endSourceLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shortDescriptor")))
    {
        utility::string_t refVal_shortDescriptor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shortDescriptor")), refVal_shortDescriptor );
        setShortDescriptor(refVal_shortDescriptor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfter")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfter")), refVal_spaceAfter );
        setSpaceAfter(refVal_spaceAfter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceBefore")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceBefore;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceBefore")), refVal_spaceBefore );
        setSpaceBefore(refVal_spaceBefore);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceDefault")))
    {
        bool refVal_spaceDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceDefault")), refVal_spaceDefault );
        setSpaceDefault(refVal_spaceDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startSourceLocation")))
    {
        int32_t refVal_startSourceLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("startSourceLocation")), refVal_startSourceLocation );
        setStartSourceLocation(refVal_startSourceLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("functionNameString")))
    {
        utility::string_t refVal_functionNameString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("functionNameString")), refVal_functionNameString );
        setFunctionNameString(refVal_functionNameString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("functionName")))
    {
        std::shared_ptr<BTPName_261> refVal_functionName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("functionName")), refVal_functionName );
        setFunctionName(refVal_functionName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("functionExpression")))
    {
        std::shared_ptr<BTPExpression_9> refVal_functionExpression;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("functionExpression")), refVal_functionExpression );
        setFunctionExpression(refVal_functionExpression);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceInEmptyList")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceInEmptyList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceInEmptyList")), refVal_spaceInEmptyList );
        setSpaceInEmptyList(refVal_spaceInEmptyList);
    }
    return ok;
}

utility::string_t BTPExpressionCall_240::getFunctionNameString() const
{
    return m_FunctionNameString;
}

void BTPExpressionCall_240::setFunctionNameString(const utility::string_t& value)
{
    m_FunctionNameString = value;
    m_FunctionNameStringIsSet = true;
}

bool BTPExpressionCall_240::functionNameStringIsSet() const
{
    return m_FunctionNameStringIsSet;
}

void BTPExpressionCall_240::unsetFunctionNameString()
{
    m_FunctionNameStringIsSet = false;
}
std::shared_ptr<BTPName_261> BTPExpressionCall_240::getFunctionName() const
{
    return m_FunctionName;
}

void BTPExpressionCall_240::setFunctionName(const std::shared_ptr<BTPName_261>& value)
{
    m_FunctionName = value;
    m_FunctionNameIsSet = true;
}

bool BTPExpressionCall_240::functionNameIsSet() const
{
    return m_FunctionNameIsSet;
}

void BTPExpressionCall_240::unsetFunctionName()
{
    m_FunctionNameIsSet = false;
}
std::shared_ptr<BTPExpression_9> BTPExpressionCall_240::getFunctionExpression() const
{
    return m_FunctionExpression;
}

void BTPExpressionCall_240::setFunctionExpression(const std::shared_ptr<BTPExpression_9>& value)
{
    m_FunctionExpression = value;
    m_FunctionExpressionIsSet = true;
}

bool BTPExpressionCall_240::functionExpressionIsSet() const
{
    return m_FunctionExpressionIsSet;
}

void BTPExpressionCall_240::unsetFunctionExpression()
{
    m_FunctionExpressionIsSet = false;
}
std::shared_ptr<BTPSpace_10> BTPExpressionCall_240::getSpaceInEmptyList() const
{
    return m_SpaceInEmptyList;
}

void BTPExpressionCall_240::setSpaceInEmptyList(const std::shared_ptr<BTPSpace_10>& value)
{
    m_SpaceInEmptyList = value;
    m_SpaceInEmptyListIsSet = true;
}

bool BTPExpressionCall_240::spaceInEmptyListIsSet() const
{
    return m_SpaceInEmptyListIsSet;
}

void BTPExpressionCall_240::unsetSpaceInEmptyList()
{
    m_SpaceInEmptyListIsSet = false;
}
}
}
}
}

