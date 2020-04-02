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
 * UsersApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_UsersApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_UsersApi_H_


#include "../ApiClient.h"

#include "BTUserOAuth2SummaryInfo.h"
#include "BTUserSettingsInfo.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  UsersApi 
{
public:

    explicit UsersApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~UsersApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uid"></param>
    /// <param name="includematerials"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<BTUserSettingsInfo>> getUserSettings(
        utility::string_t uid,
        boost::optional<bool> includematerials
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="includematerials"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<BTUserSettingsInfo>> getUserSettingsCurrentLoggedInUser(
        boost::optional<bool> includematerials
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<BTUserOAuth2SummaryInfo>> sessionInfo(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_UsersApi_H_ */
