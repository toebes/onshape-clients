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



#include "BTPStatementTry_1523.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPStatementTry_1523::BTPStatementTry_1523()
{
    m_StandardType = utility::conversions::to_string_t("");
    m_StandardTypeIsSet = false;
    m_NameIsSet = false;
    m_r_typeName = utility::conversions::to_string_t("");
    m_r_typeNameIsSet = false;
    m_BodyIsSet = false;
    m_Silent = false;
    m_SilentIsSet = false;
    m_CatchVariableIsSet = false;
    m_SpaceBeforeSilentIsSet = false;
    m_CatchBlockIsSet = false;
    m_SpaceAfterCatchIsSet = false;
}

BTPStatementTry_1523::~BTPStatementTry_1523()
{
}

void BTPStatementTry_1523::validate()
{
    // TODO: implement validation
}

web::json::value BTPStatementTry_1523::toJson() const
{
    web::json::value val = this->BTPStatement_269::toJson();
    
    if(m_StandardTypeIsSet)
    {
        val[utility::conversions::to_string_t("standardType")] = ModelBase::toJson(m_StandardType);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_r_typeNameIsSet)
    {
        val[utility::conversions::to_string_t("typeName")] = ModelBase::toJson(m_r_typeName);
    }
    if(m_BodyIsSet)
    {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_Body);
    }
    if(m_SilentIsSet)
    {
        val[utility::conversions::to_string_t("silent")] = ModelBase::toJson(m_Silent);
    }
    if(m_CatchVariableIsSet)
    {
        val[utility::conversions::to_string_t("catchVariable")] = ModelBase::toJson(m_CatchVariable);
    }
    if(m_SpaceBeforeSilentIsSet)
    {
        val[utility::conversions::to_string_t("spaceBeforeSilent")] = ModelBase::toJson(m_SpaceBeforeSilent);
    }
    if(m_CatchBlockIsSet)
    {
        val[utility::conversions::to_string_t("catchBlock")] = ModelBase::toJson(m_CatchBlock);
    }
    if(m_SpaceAfterCatchIsSet)
    {
        val[utility::conversions::to_string_t("spaceAfterCatch")] = ModelBase::toJson(m_SpaceAfterCatch);
    }

    return val;
}

bool BTPStatementTry_1523::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTPStatement_269::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("standardType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("standardType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_standardType;
            ok &= ModelBase::fromJson(fieldValue, refVal_standardType);
            setStandardType(refVal_standardType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPIdentifier_8> refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("typeName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("typeName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_typeName;
            ok &= ModelBase::fromJson(fieldValue, refVal_typeName);
            setRTypeName(refVal_typeName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPStatementBlock_271> refVal_body;
            ok &= ModelBase::fromJson(fieldValue, refVal_body);
            setBody(refVal_body);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("silent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("silent"));
        if(!fieldValue.is_null())
        {
            bool refVal_silent;
            ok &= ModelBase::fromJson(fieldValue, refVal_silent);
            setSilent(refVal_silent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("catchVariable")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("catchVariable"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPIdentifier_8> refVal_catchVariable;
            ok &= ModelBase::fromJson(fieldValue, refVal_catchVariable);
            setCatchVariable(refVal_catchVariable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spaceBeforeSilent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spaceBeforeSilent"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPSpace_10> refVal_spaceBeforeSilent;
            ok &= ModelBase::fromJson(fieldValue, refVal_spaceBeforeSilent);
            setSpaceBeforeSilent(refVal_spaceBeforeSilent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("catchBlock")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("catchBlock"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPStatementBlock_271> refVal_catchBlock;
            ok &= ModelBase::fromJson(fieldValue, refVal_catchBlock);
            setCatchBlock(refVal_catchBlock);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spaceAfterCatch")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spaceAfterCatch"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPSpace_10> refVal_spaceAfterCatch;
            ok &= ModelBase::fromJson(fieldValue, refVal_spaceAfterCatch);
            setSpaceAfterCatch(refVal_spaceAfterCatch);
        }
    }
    return ok;
}

void BTPStatementTry_1523::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_AnnotationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("annotation"), m_Annotation));
    }
    if(m_StandardTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("standardType"), m_StandardType));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_r_typeNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("typeName"), m_r_typeName));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    }
    if(m_SilentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("silent"), m_Silent));
    }
    if(m_CatchVariableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("catchVariable"), m_CatchVariable));
    }
    if(m_SpaceBeforeSilentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceBeforeSilent"), m_SpaceBeforeSilent));
    }
    if(m_CatchBlockIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("catchBlock"), m_CatchBlock));
    }
    if(m_SpaceAfterCatchIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfterCatch"), m_SpaceAfterCatch));
    }
}

bool BTPStatementTry_1523::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("annotation")))
    {
        std::shared_ptr<BTPAnnotation_231> refVal_annotation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("annotation")), refVal_annotation );
        setAnnotation(refVal_annotation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("standardType")))
    {
        utility::string_t refVal_standardType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("standardType")), refVal_standardType );
        setStandardType(refVal_standardType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        std::shared_ptr<BTPIdentifier_8> refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("typeName")))
    {
        utility::string_t refVal_typeName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("typeName")), refVal_typeName );
        setRTypeName(refVal_typeName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        std::shared_ptr<BTPStatementBlock_271> refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("silent")))
    {
        bool refVal_silent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("silent")), refVal_silent );
        setSilent(refVal_silent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("catchVariable")))
    {
        std::shared_ptr<BTPIdentifier_8> refVal_catchVariable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("catchVariable")), refVal_catchVariable );
        setCatchVariable(refVal_catchVariable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceBeforeSilent")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceBeforeSilent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceBeforeSilent")), refVal_spaceBeforeSilent );
        setSpaceBeforeSilent(refVal_spaceBeforeSilent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("catchBlock")))
    {
        std::shared_ptr<BTPStatementBlock_271> refVal_catchBlock;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("catchBlock")), refVal_catchBlock );
        setCatchBlock(refVal_catchBlock);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfterCatch")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfterCatch;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfterCatch")), refVal_spaceAfterCatch );
        setSpaceAfterCatch(refVal_spaceAfterCatch);
    }
    return ok;
}

utility::string_t BTPStatementTry_1523::getStandardType() const
{
    return m_StandardType;
}

void BTPStatementTry_1523::setStandardType(const utility::string_t& value)
{
    m_StandardType = value;
    m_StandardTypeIsSet = true;
}

bool BTPStatementTry_1523::standardTypeIsSet() const
{
    return m_StandardTypeIsSet;
}

void BTPStatementTry_1523::unsetStandardType()
{
    m_StandardTypeIsSet = false;
}
std::shared_ptr<BTPIdentifier_8> BTPStatementTry_1523::getName() const
{
    return m_Name;
}

void BTPStatementTry_1523::setName(const std::shared_ptr<BTPIdentifier_8>& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTPStatementTry_1523::nameIsSet() const
{
    return m_NameIsSet;
}

void BTPStatementTry_1523::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t BTPStatementTry_1523::getRTypeName() const
{
    return m_r_typeName;
}

void BTPStatementTry_1523::setRTypeName(const utility::string_t& value)
{
    m_r_typeName = value;
    m_r_typeNameIsSet = true;
}

bool BTPStatementTry_1523::rTypeNameIsSet() const
{
    return m_r_typeNameIsSet;
}

void BTPStatementTry_1523::unsetr_typeName()
{
    m_r_typeNameIsSet = false;
}
std::shared_ptr<BTPStatementBlock_271> BTPStatementTry_1523::getBody() const
{
    return m_Body;
}

void BTPStatementTry_1523::setBody(const std::shared_ptr<BTPStatementBlock_271>& value)
{
    m_Body = value;
    m_BodyIsSet = true;
}

bool BTPStatementTry_1523::bodyIsSet() const
{
    return m_BodyIsSet;
}

void BTPStatementTry_1523::unsetBody()
{
    m_BodyIsSet = false;
}
bool BTPStatementTry_1523::isSilent() const
{
    return m_Silent;
}

void BTPStatementTry_1523::setSilent(bool value)
{
    m_Silent = value;
    m_SilentIsSet = true;
}

bool BTPStatementTry_1523::silentIsSet() const
{
    return m_SilentIsSet;
}

void BTPStatementTry_1523::unsetSilent()
{
    m_SilentIsSet = false;
}
std::shared_ptr<BTPIdentifier_8> BTPStatementTry_1523::getCatchVariable() const
{
    return m_CatchVariable;
}

void BTPStatementTry_1523::setCatchVariable(const std::shared_ptr<BTPIdentifier_8>& value)
{
    m_CatchVariable = value;
    m_CatchVariableIsSet = true;
}

bool BTPStatementTry_1523::catchVariableIsSet() const
{
    return m_CatchVariableIsSet;
}

void BTPStatementTry_1523::unsetCatchVariable()
{
    m_CatchVariableIsSet = false;
}
std::shared_ptr<BTPSpace_10> BTPStatementTry_1523::getSpaceBeforeSilent() const
{
    return m_SpaceBeforeSilent;
}

void BTPStatementTry_1523::setSpaceBeforeSilent(const std::shared_ptr<BTPSpace_10>& value)
{
    m_SpaceBeforeSilent = value;
    m_SpaceBeforeSilentIsSet = true;
}

bool BTPStatementTry_1523::spaceBeforeSilentIsSet() const
{
    return m_SpaceBeforeSilentIsSet;
}

void BTPStatementTry_1523::unsetSpaceBeforeSilent()
{
    m_SpaceBeforeSilentIsSet = false;
}
std::shared_ptr<BTPStatementBlock_271> BTPStatementTry_1523::getCatchBlock() const
{
    return m_CatchBlock;
}

void BTPStatementTry_1523::setCatchBlock(const std::shared_ptr<BTPStatementBlock_271>& value)
{
    m_CatchBlock = value;
    m_CatchBlockIsSet = true;
}

bool BTPStatementTry_1523::catchBlockIsSet() const
{
    return m_CatchBlockIsSet;
}

void BTPStatementTry_1523::unsetCatchBlock()
{
    m_CatchBlockIsSet = false;
}
std::shared_ptr<BTPSpace_10> BTPStatementTry_1523::getSpaceAfterCatch() const
{
    return m_SpaceAfterCatch;
}

void BTPStatementTry_1523::setSpaceAfterCatch(const std::shared_ptr<BTPSpace_10>& value)
{
    m_SpaceAfterCatch = value;
    m_SpaceAfterCatchIsSet = true;
}

bool BTPStatementTry_1523::spaceAfterCatchIsSet() const
{
    return m_SpaceAfterCatchIsSet;
}

void BTPStatementTry_1523::unsetSpaceAfterCatch()
{
    m_SpaceAfterCatchIsSet = false;
}
}
}
}
}

