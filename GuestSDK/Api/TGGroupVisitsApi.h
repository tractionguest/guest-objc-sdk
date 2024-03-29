#import <Foundation/Foundation.h>
#import "TGErrorsList.h"
#import "TGGroupVisit.h"
#import "TGGroupVisitCreateParams.h"
#import "TGGroupVisitUpdateParams.h"
#import "TGPaginatedGroupVisitsList.h"
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



@interface TGGroupVisitsApi: NSObject <TGApi>

extern NSString* kTGGroupVisitsApiErrorDomain;
extern NSInteger kTGGroupVisitsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(TGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create a new Group Visit (Appointment)
/// Creates a `GroupVisit` (Appointment)
///
/// @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored (optional)
/// @param groupVisitCreateParams  (optional)
/// 
///  code:201 message:"Created the `GroupVisit`",
///  code:400 message:"A generic error",
///  code:401 message:"You do not have permission to create this",
///  code:403 message:"You do not have permission for this action",
///  code:422 message:"Your request was not formatted correctly"
///
/// @return TGGroupVisit*
-(NSURLSessionTask*) createGroupVisitWithIdempotencyKey: (NSString*) idempotencyKey
    groupVisitCreateParams: (TGGroupVisitCreateParams*) groupVisitCreateParams
    completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler;


/// Delete a Group Visit (Appointment)
/// Deletes a single instance of `GroupVisit` (Appointment).
///
/// @param groupVisitId 
/// @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored (optional)
/// 
///  code:204 message:"The `GroupVisit` has been deleted",
///  code:400 message:"There was an error in trying to delete the `GroupVisit`"
///
/// @return void
-(NSURLSessionTask*) deleteGroupVisitWithGroupVisitId: (NSString*) groupVisitId
    idempotencyKey: (NSString*) idempotencyKey
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a Group Visit (Appointment)
/// Gets the details of a single instance of a `GroupVisit`.
///
/// @param groupVisitId 
/// 
///  code:200 message:"Successful response - returns a single `GroupVisit`.",
///  code:400 message:"A generic error",
///  code:401 message:"You do not have permission to view this GroupVisit",
///  code:403 message:"You do not have permission for this action",
///  code:404 message:"The GroupVisit does not exist"
///
/// @return TGGroupVisit*
-(NSURLSessionTask*) getGroupVisitWithGroupVisitId: (NSString*) groupVisitId
    completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler;


/// List all Group Visits (Appointments)
/// Gets a list of all `GroupVisit` entities (Appointments).
///
/// @param limit Limits the results to a specified number. Defaults to 50. (optional)
/// @param offset Offsets the results to a specified number. Defaults to 0. (optional)
/// @param locationIds A comma-separated string of locations IDs, to only show group visits (appointments) from those locations. (optional)
/// @param sortWith A combination of attribute and direction, joined with an underscore, for sorting. Valid attributes are: &#x60;created_at&#x60;, &#x60;updated_at&#x60;, &#x60;name&#x60;, and &#x60;start_time&#x60;. Valid directions are &#x60;asc&#x60; and &#x60;desc&#x60;. E.g., &#x60;name_desc&#x60;, &#x60;start_time_asc&#x60;. (optional)
/// 
///  code:200 message:"Successful response - returns an array of `GroupVisit` entities.",
///  code:400 message:"A generic error",
///  code:401 message:"You do not have permission to view this",
///  code:403 message:"You do not have permission for this action"
///
/// @return TGPaginatedGroupVisitsList*
-(NSURLSessionTask*) getGroupVisitsWithLimit: (NSString*) limit
    offset: (NSString*) offset
    locationIds: (NSString*) locationIds
    sortWith: (NSString*) sortWith
    completionHandler: (void (^)(TGPaginatedGroupVisitsList* output, NSError* error)) handler;


/// Update a Group Visit (Appointment)
/// Updates an existing `GroupVisit` (Appointment).
///
/// @param groupVisitId 
/// @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored (optional)
/// @param groupVisitUpdateParams  (optional)
/// 
///  code:202 message:"Successful response",
///  code:400 message:"A generic error",
///  code:401 message:"You do not have permission to view this GroupVisit",
///  code:403 message:"You do not have permission for this action",
///  code:404 message:"The GroupVisit does not exist",
///  code:422 message:"Your request was not formatted correctly"
///
/// @return TGGroupVisit*
-(NSURLSessionTask*) updateGroupVisitWithGroupVisitId: (NSString*) groupVisitId
    idempotencyKey: (NSString*) idempotencyKey
    groupVisitUpdateParams: (TGGroupVisitUpdateParams*) groupVisitUpdateParams
    completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler;



@end
