#import <Foundation/Foundation.h>
#import "TGErrorsList.h"
#import "TGPaginatedWatchlistList.h"
#import "TGWatchlist.h"
#import "TGWatchlistCreateParams.h"
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



@interface TGWatchlistsApi: NSObject <TGApi>

extern NSString* kTGWatchlistsApiErrorDomain;
extern NSInteger kTGWatchlistsApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(TGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Create Watchlist
/// Create a new `Watchlist` record. Please note, every action taken against this endpoint is recorded in the audit log.
///
/// @param watchlistCreateParams The new &#x60;Watchlist&#x60; to create
/// @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored (optional)
/// 
///  code:201 message:"The newly created `Watchlist`",
///  code:4XX message:"An error happened"
///
/// @return TGWatchlist*
-(NSURLSessionTask*) createWatchlistWithWatchlistCreateParams: (TGWatchlistCreateParams*) watchlistCreateParams
    idempotencyKey: (NSString*) idempotencyKey
    completionHandler: (void (^)(TGWatchlist* output, NSError* error)) handler;


/// Deletes a Watchlist
/// Deletes a single instance of `Watchlist`
///
/// @param watchlistId 
/// @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored (optional)
/// 
///  code:204 message:"The Watchlist has been deleted",
///  code:4XX message:"Bad request"
///
/// @return void
-(NSURLSessionTask*) deleteWatchlistWithWatchlistId: (NSString*) watchlistId
    idempotencyKey: (NSString*) idempotencyKey
    completionHandler: (void (^)(NSError* error)) handler;


/// Get a Watchlist
/// Gets the details of a single instance of a `Watchlist`.
///
/// @param watchlistId 
/// @param include A list of comma-separated related models to include (optional)
/// 
///  code:200 message:"Successful response - returns a single `Watchlist`.",
///  code:4XX message:""
///
/// @return TGWatchlist*
-(NSURLSessionTask*) getWatchlistWithWatchlistId: (NSString*) watchlistId
    include: (NSString*) include
    completionHandler: (void (^)(TGWatchlist* output, NSError* error)) handler;


/// List all Watchlists
/// Gets a list of all `Watchlist` entities.
///
/// @param limit Limits the results to a specified number, defaults to 50 (optional)
/// @param offset Offsets the results to a specified number, defaults to 0 (optional)
/// @param query Query the results by &#x60;first_name&#x60;, &#x60;last_name&#x60;, &#x60;email&#x60;, &#x60;colour&#x60;, and &#x60;notes&#x60; all at once. (optional)
/// @param withColours A comma separated list of case-insensitive colour values. i.e., &#x60;red&#x60;, &#x60;green&#x60;, &#x60;yellow&#x60;, and &#x60;orange&#x60; (optional)
/// @param include A list of comma-separated related models to include (optional)
/// 
///  code:200 message:"Successful response - returns an array of `Watchlist` entities.",
///  code:4XX message:"A generic error"
///
/// @return TGPaginatedWatchlistList*
-(NSURLSessionTask*) getWatchlistsWithLimit: (NSNumber*) limit
    offset: (NSNumber*) offset
    query: (NSString*) query
    withColours: (NSString*) withColours
    include: (NSString*) include
    completionHandler: (void (^)(TGPaginatedWatchlistList* output, NSError* error)) handler;


/// Update a Watchlist
/// Update an existing `Watchlist` record. Every operation against this endpoint is recorded in the audit log.
///
/// @param watchlistId 
/// @param watchlistCreateParams The watchlist record attributes to update
/// @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored (optional)
/// 
///  code:200 message:"The complete updated watchlist record",
///  code:4XX message:"Bad request"
///
/// @return TGWatchlist*
-(NSURLSessionTask*) updateWatchlistWithWatchlistId: (NSString*) watchlistId
    watchlistCreateParams: (TGWatchlistCreateParams*) watchlistCreateParams
    idempotencyKey: (NSString*) idempotencyKey
    completionHandler: (void (^)(TGWatchlist* output, NSError* error)) handler;



@end
