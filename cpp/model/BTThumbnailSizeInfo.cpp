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



#include "BTThumbnailSizeInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTThumbnailSizeInfo::BTThumbnailSizeInfo()
{
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
    m_MediaType = utility::conversions::to_string_t("");
    m_MediaTypeIsSet = false;
    m_RenderMode = utility::conversions::to_string_t("");
    m_RenderModeIsSet = false;
    m_SheetName = utility::conversions::to_string_t("");
    m_SheetNameIsSet = false;
    m_Size = utility::conversions::to_string_t("");
    m_SizeIsSet = false;
    m_UniqueId = utility::conversions::to_string_t("");
    m_UniqueIdIsSet = false;
    m_ViewOrientation = utility::conversions::to_string_t("");
    m_ViewOrientationIsSet = false;
}

BTThumbnailSizeInfo::~BTThumbnailSizeInfo()
{
}

void BTThumbnailSizeInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTThumbnailSizeInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }
    if(m_MediaTypeIsSet)
    {
        val[utility::conversions::to_string_t("mediaType")] = ModelBase::toJson(m_MediaType);
    }
    if(m_RenderModeIsSet)
    {
        val[utility::conversions::to_string_t("renderMode")] = ModelBase::toJson(m_RenderMode);
    }
    if(m_SheetNameIsSet)
    {
        val[utility::conversions::to_string_t("sheetName")] = ModelBase::toJson(m_SheetName);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_UniqueIdIsSet)
    {
        val[utility::conversions::to_string_t("uniqueId")] = ModelBase::toJson(m_UniqueId);
    }
    if(m_ViewOrientationIsSet)
    {
        val[utility::conversions::to_string_t("viewOrientation")] = ModelBase::toJson(m_ViewOrientation);
    }

    return val;
}

bool BTThumbnailSizeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("href")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_href;
            ok &= ModelBase::fromJson(fieldValue, refVal_href);
            setHref(refVal_href);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mediaType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mediaType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_mediaType;
            ok &= ModelBase::fromJson(fieldValue, refVal_mediaType);
            setMediaType(refVal_mediaType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("renderMode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("renderMode"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_renderMode;
            ok &= ModelBase::fromJson(fieldValue, refVal_renderMode);
            setRenderMode(refVal_renderMode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sheetName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sheetName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sheetName;
            ok &= ModelBase::fromJson(fieldValue, refVal_sheetName);
            setSheetName(refVal_sheetName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_size);
            setSize(refVal_size);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uniqueId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uniqueId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_uniqueId;
            ok &= ModelBase::fromJson(fieldValue, refVal_uniqueId);
            setUniqueId(refVal_uniqueId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("viewOrientation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("viewOrientation"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_viewOrientation;
            ok &= ModelBase::fromJson(fieldValue, refVal_viewOrientation);
            setViewOrientation(refVal_viewOrientation);
        }
    }
    return ok;
}

void BTThumbnailSizeInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    }
    if(m_MediaTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mediaType"), m_MediaType));
    }
    if(m_RenderModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("renderMode"), m_RenderMode));
    }
    if(m_SheetNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sheetName"), m_SheetName));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_UniqueIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uniqueId"), m_UniqueId));
    }
    if(m_ViewOrientationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("viewOrientation"), m_ViewOrientation));
    }
}

bool BTThumbnailSizeInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("href")))
    {
        utility::string_t refVal_href;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("href")), refVal_href );
        setHref(refVal_href);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mediaType")))
    {
        utility::string_t refVal_mediaType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mediaType")), refVal_mediaType );
        setMediaType(refVal_mediaType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("renderMode")))
    {
        utility::string_t refVal_renderMode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("renderMode")), refVal_renderMode );
        setRenderMode(refVal_renderMode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sheetName")))
    {
        utility::string_t refVal_sheetName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sheetName")), refVal_sheetName );
        setSheetName(refVal_sheetName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        utility::string_t refVal_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("size")), refVal_size );
        setSize(refVal_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uniqueId")))
    {
        utility::string_t refVal_uniqueId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uniqueId")), refVal_uniqueId );
        setUniqueId(refVal_uniqueId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("viewOrientation")))
    {
        utility::string_t refVal_viewOrientation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("viewOrientation")), refVal_viewOrientation );
        setViewOrientation(refVal_viewOrientation);
    }
    return ok;
}

utility::string_t BTThumbnailSizeInfo::getHref() const
{
    return m_Href;
}

void BTThumbnailSizeInfo::setHref(const utility::string_t& value)
{
    m_Href = value;
    m_HrefIsSet = true;
}

bool BTThumbnailSizeInfo::hrefIsSet() const
{
    return m_HrefIsSet;
}

void BTThumbnailSizeInfo::unsetHref()
{
    m_HrefIsSet = false;
}
utility::string_t BTThumbnailSizeInfo::getMediaType() const
{
    return m_MediaType;
}

void BTThumbnailSizeInfo::setMediaType(const utility::string_t& value)
{
    m_MediaType = value;
    m_MediaTypeIsSet = true;
}

bool BTThumbnailSizeInfo::mediaTypeIsSet() const
{
    return m_MediaTypeIsSet;
}

void BTThumbnailSizeInfo::unsetMediaType()
{
    m_MediaTypeIsSet = false;
}
utility::string_t BTThumbnailSizeInfo::getRenderMode() const
{
    return m_RenderMode;
}

void BTThumbnailSizeInfo::setRenderMode(const utility::string_t& value)
{
    m_RenderMode = value;
    m_RenderModeIsSet = true;
}

bool BTThumbnailSizeInfo::renderModeIsSet() const
{
    return m_RenderModeIsSet;
}

void BTThumbnailSizeInfo::unsetRenderMode()
{
    m_RenderModeIsSet = false;
}
utility::string_t BTThumbnailSizeInfo::getSheetName() const
{
    return m_SheetName;
}

void BTThumbnailSizeInfo::setSheetName(const utility::string_t& value)
{
    m_SheetName = value;
    m_SheetNameIsSet = true;
}

bool BTThumbnailSizeInfo::sheetNameIsSet() const
{
    return m_SheetNameIsSet;
}

void BTThumbnailSizeInfo::unsetSheetName()
{
    m_SheetNameIsSet = false;
}
utility::string_t BTThumbnailSizeInfo::getSize() const
{
    return m_Size;
}

void BTThumbnailSizeInfo::setSize(const utility::string_t& value)
{
    m_Size = value;
    m_SizeIsSet = true;
}

bool BTThumbnailSizeInfo::sizeIsSet() const
{
    return m_SizeIsSet;
}

void BTThumbnailSizeInfo::unsetSize()
{
    m_SizeIsSet = false;
}
utility::string_t BTThumbnailSizeInfo::getUniqueId() const
{
    return m_UniqueId;
}

void BTThumbnailSizeInfo::setUniqueId(const utility::string_t& value)
{
    m_UniqueId = value;
    m_UniqueIdIsSet = true;
}

bool BTThumbnailSizeInfo::uniqueIdIsSet() const
{
    return m_UniqueIdIsSet;
}

void BTThumbnailSizeInfo::unsetUniqueId()
{
    m_UniqueIdIsSet = false;
}
utility::string_t BTThumbnailSizeInfo::getViewOrientation() const
{
    return m_ViewOrientation;
}

void BTThumbnailSizeInfo::setViewOrientation(const utility::string_t& value)
{
    m_ViewOrientation = value;
    m_ViewOrientationIsSet = true;
}

bool BTThumbnailSizeInfo::viewOrientationIsSet() const
{
    return m_ViewOrientationIsSet;
}

void BTThumbnailSizeInfo::unsetViewOrientation()
{
    m_ViewOrientationIsSet = false;
}
}
}
}
}

