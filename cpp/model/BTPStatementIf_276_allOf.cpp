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



#include "BTPStatementIf_276_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPStatementIf_276_allOf::BTPStatementIf_276_allOf()
{
    m_ConditionIsSet = false;
    m_SpaceAfterIfIsSet = false;
    m_ThenBodyIsSet = false;
    m_ElseBodyIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPStatementIf_276_allOf::~BTPStatementIf_276_allOf()
{
}

void BTPStatementIf_276_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPStatementIf_276_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ConditionIsSet)
    {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(m_Condition);
    }
    if(m_SpaceAfterIfIsSet)
    {
        val[utility::conversions::to_string_t("spaceAfterIf")] = ModelBase::toJson(m_SpaceAfterIf);
    }
    if(m_ThenBodyIsSet)
    {
        val[utility::conversions::to_string_t("thenBody")] = ModelBase::toJson(m_ThenBody);
    }
    if(m_ElseBodyIsSet)
    {
        val[utility::conversions::to_string_t("elseBody")] = ModelBase::toJson(m_ElseBody);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPStatementIf_276_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPExpression_9> refVal_condition;
            ok &= ModelBase::fromJson(fieldValue, refVal_condition);
            setCondition(refVal_condition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spaceAfterIf")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spaceAfterIf"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPSpace_10> refVal_spaceAfterIf;
            ok &= ModelBase::fromJson(fieldValue, refVal_spaceAfterIf);
            setSpaceAfterIf(refVal_spaceAfterIf);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thenBody")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thenBody"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPStatement_269> refVal_thenBody;
            ok &= ModelBase::fromJson(fieldValue, refVal_thenBody);
            setThenBody(refVal_thenBody);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elseBody")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elseBody"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPStatement_269> refVal_elseBody;
            ok &= ModelBase::fromJson(fieldValue, refVal_elseBody);
            setElseBody(refVal_elseBody);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTPStatementIf_276_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ConditionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("condition"), m_Condition));
    }
    if(m_SpaceAfterIfIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfterIf"), m_SpaceAfterIf));
    }
    if(m_ThenBodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("thenBody"), m_ThenBody));
    }
    if(m_ElseBodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("elseBody"), m_ElseBody));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPStatementIf_276_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("condition")))
    {
        std::shared_ptr<BTPExpression_9> refVal_condition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("condition")), refVal_condition );
        setCondition(refVal_condition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfterIf")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfterIf;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfterIf")), refVal_spaceAfterIf );
        setSpaceAfterIf(refVal_spaceAfterIf);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("thenBody")))
    {
        std::shared_ptr<BTPStatement_269> refVal_thenBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("thenBody")), refVal_thenBody );
        setThenBody(refVal_thenBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("elseBody")))
    {
        std::shared_ptr<BTPStatement_269> refVal_elseBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("elseBody")), refVal_elseBody );
        setElseBody(refVal_elseBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTPExpression_9> BTPStatementIf_276_allOf::getCondition() const
{
    return m_Condition;
}

void BTPStatementIf_276_allOf::setCondition(const std::shared_ptr<BTPExpression_9>& value)
{
    m_Condition = value;
    m_ConditionIsSet = true;
}

bool BTPStatementIf_276_allOf::conditionIsSet() const
{
    return m_ConditionIsSet;
}

void BTPStatementIf_276_allOf::unsetCondition()
{
    m_ConditionIsSet = false;
}
std::shared_ptr<BTPSpace_10> BTPStatementIf_276_allOf::getSpaceAfterIf() const
{
    return m_SpaceAfterIf;
}

void BTPStatementIf_276_allOf::setSpaceAfterIf(const std::shared_ptr<BTPSpace_10>& value)
{
    m_SpaceAfterIf = value;
    m_SpaceAfterIfIsSet = true;
}

bool BTPStatementIf_276_allOf::spaceAfterIfIsSet() const
{
    return m_SpaceAfterIfIsSet;
}

void BTPStatementIf_276_allOf::unsetSpaceAfterIf()
{
    m_SpaceAfterIfIsSet = false;
}
std::shared_ptr<BTPStatement_269> BTPStatementIf_276_allOf::getThenBody() const
{
    return m_ThenBody;
}

void BTPStatementIf_276_allOf::setThenBody(const std::shared_ptr<BTPStatement_269>& value)
{
    m_ThenBody = value;
    m_ThenBodyIsSet = true;
}

bool BTPStatementIf_276_allOf::thenBodyIsSet() const
{
    return m_ThenBodyIsSet;
}

void BTPStatementIf_276_allOf::unsetThenBody()
{
    m_ThenBodyIsSet = false;
}
std::shared_ptr<BTPStatement_269> BTPStatementIf_276_allOf::getElseBody() const
{
    return m_ElseBody;
}

void BTPStatementIf_276_allOf::setElseBody(const std::shared_ptr<BTPStatement_269>& value)
{
    m_ElseBody = value;
    m_ElseBodyIsSet = true;
}

bool BTPStatementIf_276_allOf::elseBodyIsSet() const
{
    return m_ElseBodyIsSet;
}

void BTPStatementIf_276_allOf::unsetElseBody()
{
    m_ElseBodyIsSet = false;
}
utility::string_t BTPStatementIf_276_allOf::getBtType() const
{
    return m_BtType;
}

void BTPStatementIf_276_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPStatementIf_276_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPStatementIf_276_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

