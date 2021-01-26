#import <Foundation/Foundation.h>
#import "TGObject.h"

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


#import "TGHost.h"
#import "TGRegistration.h"
#import "TGSigninWatchlist.h"
@protocol TGHost;
@class TGHost;
@protocol TGRegistration;
@class TGRegistration;
@protocol TGSigninWatchlist;
@class TGSigninWatchlist;



@protocol TGSignin
@end

@interface TGSignin : TGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSString* mobileNumber;

@property(nonatomic) TGSigninWatchlist* signinWatchlist;

@property(nonatomic) NSArray<TGHost>* hosts;

@property(nonatomic) NSDate* signinTimestamp;

@property(nonatomic) NSString* signinPhotoUrl;

@property(nonatomic) NSDate* signedOutTimestamp;

@property(nonatomic) NSString* locationName;

@property(nonatomic) NSString* lastName;

@property(nonatomic) NSNumber* isAcknowledged;

@property(nonatomic) NSNumber* isAccountedFor;

@property(nonatomic) NSString* firstName;

@property(nonatomic) NSString* email;

@property(nonatomic) NSString* company;

@property(nonatomic) TGRegistration* registration;

@end
