#import <Foundation/Foundation.h>
#import "TGErrorsList.h"
#import "TGPackage.h"
#import "TGPackageCreateParams.h"
#import "TGPackageUpdateParams.h"
#import "TGPaginatedPackagesList.h"
#import "TGApi.h"

/**
* Traction Guest API
* The Traction Guest API is currently under limited release to select customers as we gather and iterate on feedback.  # Getting Started If you are interested in getting early access to the API, please send us an email to [support@tractionguest.com](mailto:support@tractionguest.com).  We will also add you to our Slack channel where you can ask questions and get further help.  # Terms and Conditions Please visit: [https://tractionguest.com/tos/api/](https://tractionguest.com/tos/api/)  # Versioning This API follows [semantic versioning](https://semver.org/), which follows the `Major`.`Minor`.`Patch` format.  * The `Major` number increments when potentially incompatible changes are made. * The `Minor` number increments when backwards-compatible additions are made. * The `Patch` number increments when backwards-compatible bug-fixes are made. 
*
* The version of the OpenAPI document: 0.16.0
* Contact: support@tractionguest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/



@interface TGPackagesApi: NSObject <TGApi>

extern NSString* kTGPackagesApiErrorDomain;
extern NSInteger kTGPackagesApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(TGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create package
/// Creates a [Package] entity by extracting information about the recipient and carrier from the given image file.
///
/// @param packageCreateParams Parameters for creating a package (optional)
/// 
///  code:200 message:"OK",
///  code:4XX message:""
///
/// @return TGPackage*
-(NSURLSessionTask*) createPackageWithPackageCreateParams: (TGPackageCreateParams*) packageCreateParams
    completionHandler: (void (^)(TGPackage* output, NSError* error)) handler;


/// 
/// Delete a pacakge
///
/// @param packageId 
/// @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored (optional)
/// 
///  code:204 message:"The package has been deleted",
///  code:4XX message:"Bad request"
///
/// @return void
-(NSURLSessionTask*) deletePackageWithPackageId: (NSString*) packageId
    idempotencyKey: (NSString*) idempotencyKey
    completionHandler: (void (^)(NSError* error)) handler;


/// Get Package
/// Gets the details of a single instance of a Package
///
/// @param packageId 
/// @param include A list of comma-separated related models to include  (optional)
/// 
///  code:200 message:"",
///  code:4XX message:"User submission error"
///
/// @return TGPackage*
-(NSURLSessionTask*) getPackageWithPackageId: (NSString*) packageId
    include: (NSString*) include
    completionHandler: (void (^)(TGPackage* output, NSError* error)) handler;


/// Get packages
/// Gets a list of [Package] entities.
///
/// @param locationIds A comma separated list of Location ids for filtering. i.e. &#39;1,2,3&#39; Will return all packages from all locations if none are specified (optional)
/// @param limit Limits the results to a specified number, defaults to 50 (optional) (default to @50)
/// @param offset Offsets the results to a specified number, defaults to 0 (optional) (default to @0)
/// @param include A list of comma-separated related models to include. Possible values: &#39;recipient&#39;, &#39;location&#39;, &#39;image&#39; (optional)
/// @param pickedUp Filters packages by their \&quot;picked_up\&quot; state.. (optional)
/// @param query Searches for packages by recipient name (optional)
/// 
///  code:200 message:"OK",
///  code:4XX message:""
///
/// @return TGPaginatedPackagesList*
-(NSURLSessionTask*) getPackagesWithLocationIds: (NSString*) locationIds
    limit: (NSNumber*) limit
    offset: (NSNumber*) offset
    include: (NSString*) include
    pickedUp: (NSNumber*) pickedUp
    query: (NSString*) query
    completionHandler: (void (^)(TGPaginatedPackagesList* output, NSError* error)) handler;


/// Update Package
/// Update/Edit information about a Package.  picked_up - changes the package_state to picked up and assigns non null value to picked_up_at  recipient_id - update the package's intended recipient. Changes package_state to 'recipient_matched' if a match hasn't been found and notifies host about their package via email. A previous recipient will stop getting notifications  carrier_name - change/update the package's carrier/courier information 
///
/// @param packageId 
/// @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored (optional)
/// @param packageUpdateParams  (optional)
/// 
///  code:200 message:"OK",
///  code:4XX message:"User submission error"
///
/// @return TGPackage*
-(NSURLSessionTask*) updatePackageWithPackageId: (NSString*) packageId
    idempotencyKey: (NSString*) idempotencyKey
    packageUpdateParams: (TGPackageUpdateParams*) packageUpdateParams
    completionHandler: (void (^)(TGPackage* output, NSError* error)) handler;



@end
