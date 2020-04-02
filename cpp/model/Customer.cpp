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



#include "Customer.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Customer::Customer()
{
    m_AccountBalance = 0L;
    m_AccountBalanceIsSet = false;
    m_BusinessVatId = utility::conversions::to_string_t("");
    m_BusinessVatIdIsSet = false;
    m_CardsIsSet = false;
    m_Created = 0L;
    m_CreatedIsSet = false;
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_DefaultCard = utility::conversions::to_string_t("");
    m_DefaultCardIsSet = false;
    m_DefaultSource = utility::conversions::to_string_t("");
    m_DefaultSourceIsSet = false;
    m_DefaultSourceObjectIsSet = false;
    m_Deleted = false;
    m_DeletedIsSet = false;
    m_Delinquent = false;
    m_DelinquentIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_DiscountIsSet = false;
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Livemode = false;
    m_LivemodeIsSet = false;
    m_MetadataIsSet = false;
    m_NextRecurringChargeIsSet = false;
    m_object = utility::conversions::to_string_t("");
    m_objectIsSet = false;
    m_ShippingIsSet = false;
    m_SourcesIsSet = false;
    m_SubscriptionIsSet = false;
    m_SubscriptionsIsSet = false;
    m_TrialEnd = 0L;
    m_TrialEndIsSet = false;
}

Customer::~Customer()
{
}

void Customer::validate()
{
    // TODO: implement validation
}

web::json::value Customer::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccountBalanceIsSet)
    {
        val[utility::conversions::to_string_t("accountBalance")] = ModelBase::toJson(m_AccountBalance);
    }
    if(m_BusinessVatIdIsSet)
    {
        val[utility::conversions::to_string_t("businessVatId")] = ModelBase::toJson(m_BusinessVatId);
    }
    if(m_CardsIsSet)
    {
        val[utility::conversions::to_string_t("cards")] = ModelBase::toJson(m_Cards);
    }
    if(m_CreatedIsSet)
    {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(m_Created);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_DefaultCardIsSet)
    {
        val[utility::conversions::to_string_t("defaultCard")] = ModelBase::toJson(m_DefaultCard);
    }
    if(m_DefaultSourceIsSet)
    {
        val[utility::conversions::to_string_t("defaultSource")] = ModelBase::toJson(m_DefaultSource);
    }
    if(m_DefaultSourceObjectIsSet)
    {
        val[utility::conversions::to_string_t("defaultSourceObject")] = ModelBase::toJson(m_DefaultSourceObject);
    }
    if(m_DeletedIsSet)
    {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(m_Deleted);
    }
    if(m_DelinquentIsSet)
    {
        val[utility::conversions::to_string_t("delinquent")] = ModelBase::toJson(m_Delinquent);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_DiscountIsSet)
    {
        val[utility::conversions::to_string_t("discount")] = ModelBase::toJson(m_Discount);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_Email);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_LivemodeIsSet)
    {
        val[utility::conversions::to_string_t("livemode")] = ModelBase::toJson(m_Livemode);
    }
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(m_Metadata);
    }
    if(m_NextRecurringChargeIsSet)
    {
        val[utility::conversions::to_string_t("nextRecurringCharge")] = ModelBase::toJson(m_NextRecurringCharge);
    }
    if(m_objectIsSet)
    {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(m_object);
    }
    if(m_ShippingIsSet)
    {
        val[utility::conversions::to_string_t("shipping")] = ModelBase::toJson(m_Shipping);
    }
    if(m_SourcesIsSet)
    {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(m_Sources);
    }
    if(m_SubscriptionIsSet)
    {
        val[utility::conversions::to_string_t("subscription")] = ModelBase::toJson(m_Subscription);
    }
    if(m_SubscriptionsIsSet)
    {
        val[utility::conversions::to_string_t("subscriptions")] = ModelBase::toJson(m_Subscriptions);
    }
    if(m_TrialEndIsSet)
    {
        val[utility::conversions::to_string_t("trialEnd")] = ModelBase::toJson(m_TrialEnd);
    }

    return val;
}

bool Customer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accountBalance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accountBalance"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_accountBalance;
            ok &= ModelBase::fromJson(fieldValue, refVal_accountBalance);
            setAccountBalance(refVal_accountBalance);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("businessVatId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("businessVatId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_businessVatId;
            ok &= ModelBase::fromJson(fieldValue, refVal_businessVatId);
            setBusinessVatId(refVal_businessVatId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cards")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cards"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CustomerCardCollection> refVal_cards;
            ok &= ModelBase::fromJson(fieldValue, refVal_cards);
            setCards(refVal_cards);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_created;
            ok &= ModelBase::fromJson(fieldValue, refVal_created);
            setCreated(refVal_created);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currency"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_currency;
            ok &= ModelBase::fromJson(fieldValue, refVal_currency);
            setCurrency(refVal_currency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultCard")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultCard"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_defaultCard;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultCard);
            setDefaultCard(refVal_defaultCard);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultSource")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultSource"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_defaultSource;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultSource);
            setDefaultSource(refVal_defaultSource);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultSourceObject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultSourceObject"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ExternalAccount> refVal_defaultSourceObject;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultSourceObject);
            setDefaultSourceObject(refVal_defaultSourceObject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal_deleted;
            ok &= ModelBase::fromJson(fieldValue, refVal_deleted);
            setDeleted(refVal_deleted);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delinquent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delinquent"));
        if(!fieldValue.is_null())
        {
            bool refVal_delinquent;
            ok &= ModelBase::fromJson(fieldValue, refVal_delinquent);
            setDelinquent(refVal_delinquent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("discount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discount"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Discount> refVal_discount;
            ok &= ModelBase::fromJson(fieldValue, refVal_discount);
            setDiscount(refVal_discount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_email;
            ok &= ModelBase::fromJson(fieldValue, refVal_email);
            setEmail(refVal_email);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("livemode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("livemode"));
        if(!fieldValue.is_null())
        {
            bool refVal_livemode;
            ok &= ModelBase::fromJson(fieldValue, refVal_livemode);
            setLivemode(refVal_livemode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_metadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_metadata);
            setMetadata(refVal_metadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nextRecurringCharge")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nextRecurringCharge"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<NextRecurringCharge> refVal_nextRecurringCharge;
            ok &= ModelBase::fromJson(fieldValue, refVal_nextRecurringCharge);
            setNextRecurringCharge(refVal_nextRecurringCharge);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_object;
            ok &= ModelBase::fromJson(fieldValue, refVal_object);
            setObject(refVal_object);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shipping")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shipping"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ShippingDetails> refVal_shipping;
            ok &= ModelBase::fromJson(fieldValue, refVal_shipping);
            setShipping(refVal_shipping);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ExternalAccountCollection> refVal_sources;
            ok &= ModelBase::fromJson(fieldValue, refVal_sources);
            setSources(refVal_sources);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Subscription> refVal_subscription;
            ok &= ModelBase::fromJson(fieldValue, refVal_subscription);
            setSubscription(refVal_subscription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriptions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptions"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CustomerSubscriptionCollection> refVal_subscriptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_subscriptions);
            setSubscriptions(refVal_subscriptions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trialEnd")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trialEnd"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_trialEnd;
            ok &= ModelBase::fromJson(fieldValue, refVal_trialEnd);
            setTrialEnd(refVal_trialEnd);
        }
    }
    return ok;
}

void Customer::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AccountBalanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("accountBalance"), m_AccountBalance));
    }
    if(m_BusinessVatIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("businessVatId"), m_BusinessVatId));
    }
    if(m_CardsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cards"), m_Cards));
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created"), m_Created));
    }
    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
    }
    if(m_DefaultCardIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultCard"), m_DefaultCard));
    }
    if(m_DefaultSourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultSource"), m_DefaultSource));
    }
    if(m_DefaultSourceObjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultSourceObject"), m_DefaultSourceObject));
    }
    if(m_DeletedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deleted"), m_Deleted));
    }
    if(m_DelinquentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("delinquent"), m_Delinquent));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_DiscountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("discount"), m_Discount));
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_Email));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_LivemodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("livemode"), m_Livemode));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("metadata"), m_Metadata));
    }
    if(m_NextRecurringChargeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nextRecurringCharge"), m_NextRecurringCharge));
    }
    if(m_objectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("object"), m_object));
    }
    if(m_ShippingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shipping"), m_Shipping));
    }
    if(m_SourcesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sources"), m_Sources));
    }
    if(m_SubscriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subscription"), m_Subscription));
    }
    if(m_SubscriptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subscriptions"), m_Subscriptions));
    }
    if(m_TrialEndIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trialEnd"), m_TrialEnd));
    }
}

bool Customer::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("accountBalance")))
    {
        int64_t refVal_accountBalance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("accountBalance")), refVal_accountBalance );
        setAccountBalance(refVal_accountBalance);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("businessVatId")))
    {
        utility::string_t refVal_businessVatId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("businessVatId")), refVal_businessVatId );
        setBusinessVatId(refVal_businessVatId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cards")))
    {
        std::shared_ptr<CustomerCardCollection> refVal_cards;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cards")), refVal_cards );
        setCards(refVal_cards);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created")))
    {
        int64_t refVal_created;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("created")), refVal_created );
        setCreated(refVal_created);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        utility::string_t refVal_currency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency")), refVal_currency );
        setCurrency(refVal_currency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultCard")))
    {
        utility::string_t refVal_defaultCard;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultCard")), refVal_defaultCard );
        setDefaultCard(refVal_defaultCard);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultSource")))
    {
        utility::string_t refVal_defaultSource;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultSource")), refVal_defaultSource );
        setDefaultSource(refVal_defaultSource);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultSourceObject")))
    {
        std::shared_ptr<ExternalAccount> refVal_defaultSourceObject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultSourceObject")), refVal_defaultSourceObject );
        setDefaultSourceObject(refVal_defaultSourceObject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deleted")))
    {
        bool refVal_deleted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("deleted")), refVal_deleted );
        setDeleted(refVal_deleted);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("delinquent")))
    {
        bool refVal_delinquent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("delinquent")), refVal_delinquent );
        setDelinquent(refVal_delinquent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("discount")))
    {
        std::shared_ptr<Discount> refVal_discount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("discount")), refVal_discount );
        setDiscount(refVal_discount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("email")))
    {
        utility::string_t refVal_email;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("email")), refVal_email );
        setEmail(refVal_email);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("livemode")))
    {
        bool refVal_livemode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("livemode")), refVal_livemode );
        setLivemode(refVal_livemode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("metadata")))
    {
        std::map<utility::string_t, utility::string_t> refVal_metadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("metadata")), refVal_metadata );
        setMetadata(refVal_metadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nextRecurringCharge")))
    {
        std::shared_ptr<NextRecurringCharge> refVal_nextRecurringCharge;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nextRecurringCharge")), refVal_nextRecurringCharge );
        setNextRecurringCharge(refVal_nextRecurringCharge);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("object")))
    {
        utility::string_t refVal_object;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("object")), refVal_object );
        setObject(refVal_object);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shipping")))
    {
        std::shared_ptr<ShippingDetails> refVal_shipping;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shipping")), refVal_shipping );
        setShipping(refVal_shipping);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sources")))
    {
        std::shared_ptr<ExternalAccountCollection> refVal_sources;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sources")), refVal_sources );
        setSources(refVal_sources);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subscription")))
    {
        std::shared_ptr<Subscription> refVal_subscription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subscription")), refVal_subscription );
        setSubscription(refVal_subscription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subscriptions")))
    {
        std::shared_ptr<CustomerSubscriptionCollection> refVal_subscriptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subscriptions")), refVal_subscriptions );
        setSubscriptions(refVal_subscriptions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("trialEnd")))
    {
        int64_t refVal_trialEnd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("trialEnd")), refVal_trialEnd );
        setTrialEnd(refVal_trialEnd);
    }
    return ok;
}

int64_t Customer::getAccountBalance() const
{
    return m_AccountBalance;
}

void Customer::setAccountBalance(int64_t value)
{
    m_AccountBalance = value;
    m_AccountBalanceIsSet = true;
}

bool Customer::accountBalanceIsSet() const
{
    return m_AccountBalanceIsSet;
}

void Customer::unsetAccountBalance()
{
    m_AccountBalanceIsSet = false;
}
utility::string_t Customer::getBusinessVatId() const
{
    return m_BusinessVatId;
}

void Customer::setBusinessVatId(const utility::string_t& value)
{
    m_BusinessVatId = value;
    m_BusinessVatIdIsSet = true;
}

bool Customer::businessVatIdIsSet() const
{
    return m_BusinessVatIdIsSet;
}

void Customer::unsetBusinessVatId()
{
    m_BusinessVatIdIsSet = false;
}
std::shared_ptr<CustomerCardCollection> Customer::getCards() const
{
    return m_Cards;
}

void Customer::setCards(const std::shared_ptr<CustomerCardCollection>& value)
{
    m_Cards = value;
    m_CardsIsSet = true;
}

bool Customer::cardsIsSet() const
{
    return m_CardsIsSet;
}

void Customer::unsetCards()
{
    m_CardsIsSet = false;
}
int64_t Customer::getCreated() const
{
    return m_Created;
}

void Customer::setCreated(int64_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}

bool Customer::createdIsSet() const
{
    return m_CreatedIsSet;
}

void Customer::unsetCreated()
{
    m_CreatedIsSet = false;
}
utility::string_t Customer::getCurrency() const
{
    return m_Currency;
}

void Customer::setCurrency(const utility::string_t& value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}

bool Customer::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void Customer::unsetCurrency()
{
    m_CurrencyIsSet = false;
}
utility::string_t Customer::getDefaultCard() const
{
    return m_DefaultCard;
}

void Customer::setDefaultCard(const utility::string_t& value)
{
    m_DefaultCard = value;
    m_DefaultCardIsSet = true;
}

bool Customer::defaultCardIsSet() const
{
    return m_DefaultCardIsSet;
}

void Customer::unsetDefaultCard()
{
    m_DefaultCardIsSet = false;
}
utility::string_t Customer::getDefaultSource() const
{
    return m_DefaultSource;
}

void Customer::setDefaultSource(const utility::string_t& value)
{
    m_DefaultSource = value;
    m_DefaultSourceIsSet = true;
}

bool Customer::defaultSourceIsSet() const
{
    return m_DefaultSourceIsSet;
}

void Customer::unsetDefaultSource()
{
    m_DefaultSourceIsSet = false;
}
std::shared_ptr<ExternalAccount> Customer::getDefaultSourceObject() const
{
    return m_DefaultSourceObject;
}

void Customer::setDefaultSourceObject(const std::shared_ptr<ExternalAccount>& value)
{
    m_DefaultSourceObject = value;
    m_DefaultSourceObjectIsSet = true;
}

bool Customer::defaultSourceObjectIsSet() const
{
    return m_DefaultSourceObjectIsSet;
}

void Customer::unsetDefaultSourceObject()
{
    m_DefaultSourceObjectIsSet = false;
}
bool Customer::isDeleted() const
{
    return m_Deleted;
}

void Customer::setDeleted(bool value)
{
    m_Deleted = value;
    m_DeletedIsSet = true;
}

bool Customer::deletedIsSet() const
{
    return m_DeletedIsSet;
}

void Customer::unsetDeleted()
{
    m_DeletedIsSet = false;
}
bool Customer::isDelinquent() const
{
    return m_Delinquent;
}

void Customer::setDelinquent(bool value)
{
    m_Delinquent = value;
    m_DelinquentIsSet = true;
}

bool Customer::delinquentIsSet() const
{
    return m_DelinquentIsSet;
}

void Customer::unsetDelinquent()
{
    m_DelinquentIsSet = false;
}
utility::string_t Customer::getDescription() const
{
    return m_Description;
}

void Customer::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Customer::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Customer::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::shared_ptr<Discount> Customer::getDiscount() const
{
    return m_Discount;
}

void Customer::setDiscount(const std::shared_ptr<Discount>& value)
{
    m_Discount = value;
    m_DiscountIsSet = true;
}

bool Customer::discountIsSet() const
{
    return m_DiscountIsSet;
}

void Customer::unsetDiscount()
{
    m_DiscountIsSet = false;
}
utility::string_t Customer::getEmail() const
{
    return m_Email;
}

void Customer::setEmail(const utility::string_t& value)
{
    m_Email = value;
    m_EmailIsSet = true;
}

bool Customer::emailIsSet() const
{
    return m_EmailIsSet;
}

void Customer::unsetEmail()
{
    m_EmailIsSet = false;
}
utility::string_t Customer::getId() const
{
    return m_Id;
}

void Customer::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Customer::idIsSet() const
{
    return m_IdIsSet;
}

void Customer::unsetId()
{
    m_IdIsSet = false;
}
bool Customer::isLivemode() const
{
    return m_Livemode;
}

void Customer::setLivemode(bool value)
{
    m_Livemode = value;
    m_LivemodeIsSet = true;
}

bool Customer::livemodeIsSet() const
{
    return m_LivemodeIsSet;
}

void Customer::unsetLivemode()
{
    m_LivemodeIsSet = false;
}
std::map<utility::string_t, utility::string_t>& Customer::getMetadata()
{
    return m_Metadata;
}

void Customer::setMetadata(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool Customer::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void Customer::unsetMetadata()
{
    m_MetadataIsSet = false;
}
std::shared_ptr<NextRecurringCharge> Customer::getNextRecurringCharge() const
{
    return m_NextRecurringCharge;
}

void Customer::setNextRecurringCharge(const std::shared_ptr<NextRecurringCharge>& value)
{
    m_NextRecurringCharge = value;
    m_NextRecurringChargeIsSet = true;
}

bool Customer::nextRecurringChargeIsSet() const
{
    return m_NextRecurringChargeIsSet;
}

void Customer::unsetNextRecurringCharge()
{
    m_NextRecurringChargeIsSet = false;
}
utility::string_t Customer::getObject() const
{
    return m_object;
}

void Customer::setObject(const utility::string_t& value)
{
    m_object = value;
    m_objectIsSet = true;
}

bool Customer::objectIsSet() const
{
    return m_objectIsSet;
}

void Customer::unsetobject()
{
    m_objectIsSet = false;
}
std::shared_ptr<ShippingDetails> Customer::getShipping() const
{
    return m_Shipping;
}

void Customer::setShipping(const std::shared_ptr<ShippingDetails>& value)
{
    m_Shipping = value;
    m_ShippingIsSet = true;
}

bool Customer::shippingIsSet() const
{
    return m_ShippingIsSet;
}

void Customer::unsetShipping()
{
    m_ShippingIsSet = false;
}
std::shared_ptr<ExternalAccountCollection> Customer::getSources() const
{
    return m_Sources;
}

void Customer::setSources(const std::shared_ptr<ExternalAccountCollection>& value)
{
    m_Sources = value;
    m_SourcesIsSet = true;
}

bool Customer::sourcesIsSet() const
{
    return m_SourcesIsSet;
}

void Customer::unsetSources()
{
    m_SourcesIsSet = false;
}
std::shared_ptr<Subscription> Customer::getSubscription() const
{
    return m_Subscription;
}

void Customer::setSubscription(const std::shared_ptr<Subscription>& value)
{
    m_Subscription = value;
    m_SubscriptionIsSet = true;
}

bool Customer::subscriptionIsSet() const
{
    return m_SubscriptionIsSet;
}

void Customer::unsetSubscription()
{
    m_SubscriptionIsSet = false;
}
std::shared_ptr<CustomerSubscriptionCollection> Customer::getSubscriptions() const
{
    return m_Subscriptions;
}

void Customer::setSubscriptions(const std::shared_ptr<CustomerSubscriptionCollection>& value)
{
    m_Subscriptions = value;
    m_SubscriptionsIsSet = true;
}

bool Customer::subscriptionsIsSet() const
{
    return m_SubscriptionsIsSet;
}

void Customer::unsetSubscriptions()
{
    m_SubscriptionsIsSet = false;
}
int64_t Customer::getTrialEnd() const
{
    return m_TrialEnd;
}

void Customer::setTrialEnd(int64_t value)
{
    m_TrialEnd = value;
    m_TrialEndIsSet = true;
}

bool Customer::trialEndIsSet() const
{
    return m_TrialEndIsSet;
}

void Customer::unsetTrialEnd()
{
    m_TrialEndIsSet = false;
}
}
}
}
}

