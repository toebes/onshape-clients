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
 * BTMIndividualQueryWithOccurrenceBase_904.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMIndividualQueryWithOccurrenceBase_904_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMIndividualQueryWithOccurrenceBase_904_H_


#include "../ModelBase.h"

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
class  BTMIndividualQueryWithOccurrenceBase_904
    : public ModelBase
{
public:
    BTMIndividualQueryWithOccurrenceBase_904();
    virtual ~BTMIndividualQueryWithOccurrenceBase_904();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMIndividualQueryWithOccurrenceBase_904 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMIndividualQueryBase_139> getDeterministicIdList() const;
    bool deterministicIdListIsSet() const;
    void unsetDeterministicIdList();

    void setDeterministicIdList(const std::shared_ptr<BTMIndividualQueryBase_139>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getDeterministicIds();
    bool deterministicIdsIsSet() const;
    void unsetDeterministicIds();

    void setDeterministicIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getImportMicroversion() const;
    bool importMicroversionIsSet() const;
    void unsetImportMicroversion();

    void setImportMicroversion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetNodeId();

    void setNodeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getPath();
    bool pathIsSet() const;
    void unsetPath();

    void setPath(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMIndividualQueryBase_139> getQuery() const;
    bool queryIsSet() const;
    void unsetQuery();

    void setQuery(const std::shared_ptr<BTMIndividualQueryBase_139>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQueryString() const;
    bool queryStringIsSet() const;
    void unsetQueryString();

    void setQueryString(const utility::string_t& value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    std::shared_ptr<BTMIndividualQueryBase_139> m_DeterministicIdList;
    bool m_DeterministicIdListIsSet;
    std::vector<utility::string_t> m_DeterministicIds;
    bool m_DeterministicIdsIsSet;
    utility::string_t m_ImportMicroversion;
    bool m_ImportMicroversionIsSet;
    utility::string_t m_NodeId;
    bool m_NodeIdIsSet;
    std::vector<utility::string_t> m_Path;
    bool m_PathIsSet;
    std::shared_ptr<BTMIndividualQueryBase_139> m_Query;
    bool m_QueryIsSet;
    utility::string_t m_QueryString;
    bool m_QueryStringIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMIndividualQueryWithOccurrenceBase_904_H_ */