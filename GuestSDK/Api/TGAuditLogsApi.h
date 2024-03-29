#import <Foundation/Foundation.h>
#import "TGAuditLog.h"
#import "TGErrorsList.h"
#import "TGPaginatedAuditLogsList.h"
#import "TGApi.h"

/**
* Traction Guest API
* The Traction Guest API is currently under limited release to select customers as we gather and iterate on feedback.  # Getting Started If you are interested in getting early access to the API, please send us an email to [support@tractionguest.com](mailto:support@tractionguest.com).  We will also add you to our Slack channel where you can ask questions and get further help.  # Terms and Conditions Please visit: [https://tractionguest.com/tos/api/](https://tractionguest.com/tos/api/)  # Versioning This API follows [semantic versioning](https://semver.org/), which follows the `Major`.`Minor`.`Patch` format.  * The `Major` number increments when potentially incompatible changes are made. * The `Minor` number increments when backwards-compatible additions are made. * The `Patch` number increments when backwards-compatible bug-fixes are made. 
*
* The version of the OpenAPI document: 0.17.0
* Contact: support@tractionguest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface TGAuditLogsApi: NSObject <TGApi>

extern NSString* kTGAuditLogsApiErrorDomain;
extern NSInteger kTGAuditLogsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(TGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get an AuditLog
/// Gets the details of a single instance of an `AuditLog`.
///
/// @param auditLogId 
/// 
///  code:200 message:"Successful response - returns a single `AuditLog`.",
///  code:400 message:"A generic error",
///  code:401 message:"You don't have permission to view this AuditLog",
///  code:403 message:"You do not have permission for this action",
///  code:404 message:"The AuditLog does not exist"
///
/// @return TGAuditLog*
-(NSURLSessionTask*) getAuditLogWithAuditLogId: (NSString*) auditLogId
    completionHandler: (void (^)(TGAuditLog* output, NSError* error)) handler;


/// List all AuditLogs
/// Gets a list of all `AuditLog` entities.
///
/// @param limit Limits the results to a specified number, defaults to 50 (optional)
/// @param offset Offsets the results to a specified number, defaults to 0 (optional)
/// @param sortBy Sorts by the field name and direction provided where the pattern is &#x60;FIELD_NAME_DIRECTION&#x60; (optional)
/// @param auditableId The unique ID of a model that has associated audit logs (optional)
/// @param auditableType The name of the model that has associated audit logs. Valid values include: - &#x60;user&#x60; - &#x60;device_configuration&#x60; - &#x60;signin&#x60; - &#x60;invite&#x60; - &#x60;watchlist_record&#x60; - &#x60;account_preference&#x60; - &#x60;signout&#x60; - &#x60;host&#x60; - &#x60;invite_watchlist&#x60; - &#x60;location_preference&#x60; - &#x60;parking_lot&#x60; - &#x60;parking_stall&#x60; - &#x60;permission_bundle&#x60; - &#x60;person&#x60; - &#x60;physical_access_grant&#x60; - &#x60;physical_access_provider&#x60; - &#x60;physical_access_rule&#x60; - &#x60;security_badge_type&#x60; - &#x60;signin_watchlist&#x60; - &#x60;user_group_physical_access_rule&#x60; - &#x60;visitor&#x60; - &#x60;bulk_data_batch&#x60;  (optional)
/// @param actionType The action performed by the user. Valid values include: - &#x60;create&#x60; - &#x60;update&#x60; - &#x60;destroy&#x60;  (optional)
/// @param userId The ID of the user who performed the database change (optional)
/// 
///  code:200 message:"Successful response - returns an array of `AuditLog` entities.",
///  code:400 message:"A generic error",
///  code:401 message:"You don't have permission to view this AuditLog",
///  code:403 message:"You do not have permission for this action"
///
/// @return TGPaginatedAuditLogsList*
-(NSURLSessionTask*) getAuditLogsWithLimit: (NSNumber*) limit
    offset: (NSNumber*) offset
    sortBy: (NSString*) sortBy
    auditableId: (NSNumber*) auditableId
    auditableType: (NSString*) auditableType
    actionType: (NSString*) actionType
    userId: (NSNumber*) userId
    completionHandler: (void (^)(TGPaginatedAuditLogsList* output, NSError* error)) handler;



@end
