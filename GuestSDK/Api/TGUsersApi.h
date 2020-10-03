#import <Foundation/Foundation.h>
#import "TGErrorsList.h"
#import "TGUser.h"
#import "TGApi.h"

/**
* Traction Guest API
* The Traction Guest API is currently under limited release to select customers as we gather and iterate on feedback.  # Getting Started If you are interested in getting early access to the API, please send us an email to [support@tractionguest.com](mailto:support@tractionguest.com).  We will also add you to our Slack channel where you can ask questions and get further help.  # Terms and Conditions Please visit: [https://tractionguest.com/tos/api/](https://tractionguest.com/tos/api/)  # Versioning This API follows [semantic versioning](https://semver.org/), which follows the `Major`.`Minor`.`Patch` format.  * The `Major` number increments when potentially incompatible changes are made. * The `Minor` number increments when backwards-compatible additions are made. * The `Patch` number increments when backwards-compatible bug-fixes are made. 
*
* The version of the OpenAPI document: 0.14.1
* Contact: support@tractionguest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface TGUsersApi: NSObject <TGApi>

extern NSString* kTGUsersApiErrorDomain;
extern NSInteger kTGUsersApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(TGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get the current User
/// Gets the details of a single instance of the current `User`.
///
/// @param userId 
/// @param include A list of comma-separated related models to include (optional)
/// 
///  code:200 message:"Successful response - returns a single `User`.",
///  code:400 message:"A generic error",
///  code:401 message:"You don't have permission to view this User",
///  code:403 message:"You do not have permission for this action",
///  code:404 message:"The User does not exist"
///
/// @return TGUser*
-(NSURLSessionTask*) getCurrentUserWithUserId: (NSString*) userId
    include: (NSString*) include
    completionHandler: (void (^)(TGUser* output, NSError* error)) handler;



@end
