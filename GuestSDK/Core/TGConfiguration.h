#import <Foundation/Foundation.h>

@class TGLogger;

/**
* Traction Guest API
* The Traction Guest API is currently under limited release to select customers as we gather and iterate on feedback.  # Getting Started If you are interested in getting early access to the API, please send us an email to [support@tractionguest.com](mailto:support@tractionguest.com).  We will also add you to our Slack channel where you can ask questions and get further help.  # Terms and Conditions Please visit: [https://tractionguest.com/tos/api/](https://tractionguest.com/tos/api/)  # Versioning This API follows [semantic versioning](https://semver.org/), which follows the `Major`.`Minor`.`Patch` format.  * The `Major` number increments when potentially incompatible changes are made. * The `Minor` number increments when backwards-compatible additions are made. * The `Patch` number increments when backwards-compatible bug-fixes are made. 
*
* The version of the OpenAPI document: 0.15.0
* Contact: support@tractionguest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


static NSString * const kTGAPIVersion = @"1.0.0";

@protocol TGConfiguration <NSObject>

/**
 * Api logger
 */
@property (readonly, nonatomic) TGLogger *logger;

/**
 * Base url
 */
@property (readonly, nonatomic) NSString *host;

/**
 * Api key values for Api Key type Authentication
 */
@property (readonly, nonatomic) NSDictionary *apiKey;

/**
 * Api key prefix values to be prepend to the respective api key
 */
@property (readonly, nonatomic) NSDictionary *apiKeyPrefix;

/**
 * Username for HTTP Basic Authentication
 */
@property (readonly, nonatomic) NSString *username;

/**
 * Password for HTTP Basic Authentication
 */
@property (readonly, nonatomic) NSString *password;

/**
 * Access token for OAuth
 */
@property (readonly, nonatomic) NSString *accessToken;

/**
 * Temp folder for file download
 */
@property (readonly, nonatomic) NSString *tempFolderPath;

/**
 * Debug switch, default false
 */
@property (readonly, nonatomic) BOOL debug;

/**
 * SSL/TLS verification
 * Set this to NO to skip verifying SSL certificate when calling API from https server
 */
@property (readonly, nonatomic) BOOL verifySSL;

/**
 * SSL/TLS verification
 * Set this to customize the certificate file to verify the peer
 */
@property (readonly, nonatomic) NSString *sslCaCert;

/**
 * Authentication Settings
 */
@property (readonly, nonatomic) NSDictionary *authSettings;

/**
* Default headers for all services
*/
@property (readonly, nonatomic, strong) NSDictionary *defaultHeaders;

@end
