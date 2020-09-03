#import <Foundation/Foundation.h>
#import "TGErrorsList.h"
#import "TGPaginatedRegistrationsList.h"
#import "TGRegistrationDetail.h"
#import "TGApi.h"

/**
* Traction Guest API
* The Traction Guest API is currently under limited release to select customers as we gather and iterate on feedback.  # Getting Started If you are interested in getting early access to the API, please send us an email to [support@tractionguest.com](mailto:support@tractionguest.com).  We will also add you to our Slack channel where you can ask questions and get further help.  # Terms and Conditions Please visit: [https://tractionguest.com/tos/api/](https://tractionguest.com/tos/api/)  # Versioning This API follows [semantic versioning](https://semver.org/), which follows the `Major`.`Minor`.`Patch` format.  * The `Major` number increments when potentially incompatible changes are made. * The `Minor` number increments when backwards-compatible additions are made. * The `Patch` number increments when backwards-compatible bug-fixes are made. 
*
* The version of the OpenAPI document: 0.13.0
* Contact: support@tractionguest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface TGRegistrationsApi: NSObject <TGApi>

extern NSString* kTGRegistrationsApiErrorDomain;
extern NSInteger kTGRegistrationsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(TGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get a Registration
/// Gets the details of a single instance of a `Registration`
///
/// @param registrationId 
/// @param include A list of comma-separated related models to include (optional)
/// 
///  code:200 message:"Successful response - returns a single `RegistrationDetail`.",
///  code:400 message:"A generic error",
///  code:403 message:"You do not have permission for this action",
///  code:404 message:"The specified Registration was not found"
///
/// @return TGRegistrationDetail*
-(NSURLSessionTask*) getRegistrationWithRegistrationId: (NSString*) registrationId
    include: (NSString*) include
    completionHandler: (void (^)(TGRegistrationDetail* output, NSError* error)) handler;


/// List all Registrations
/// Gets a list of all `Registration` entities.
///
/// @param limit Limits the results to a specified number, defaults to 50 (optional)
/// @param offset Offsets the results to a specified number, defaults to 0 (optional)
/// @param locationIds A comma separated list of Location IDs (optional)
/// @param createdBefore Restricts results to only those that were created before the provided date (optional)
/// @param createdAfter Restricts results to only those that were created after the provided date (optional)
/// @param needsConfirmation A confirmed &#x60;Registration&#x60; is one with an associated &#x60;Invite&#x60;. This filter returns those without an &#x60;Invite&#x60; when true, and those with an &#x60;Invite&#x60; when false. (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized"
///
/// @return TGPaginatedRegistrationsList*
-(NSURLSessionTask*) getRegistrationsWithLimit: (NSNumber*) limit
    offset: (NSNumber*) offset
    locationIds: (NSString*) locationIds
    createdBefore: (NSString*) createdBefore
    createdAfter: (NSString*) createdAfter
    needsConfirmation: (NSNumber*) needsConfirmation
    completionHandler: (void (^)(TGPaginatedRegistrationsList* output, NSError* error)) handler;



@end
