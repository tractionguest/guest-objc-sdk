#import <Foundation/Foundation.h>
#import "TGObject.h"

/**
* Traction Guest API
* The Traction Guest API is currently under limited release to select customers as we gather and iterate on feedback.  # Getting Started If you are interested in getting early access to the API, please send us an email to [support@tractionguest.com](mailto:support@tractionguest.com).  We will also add you to our Slack channel where you can ask questions and get further help.  # Terms and Conditions Please visit: [https://tractionguest.com/tos/api/](https://tractionguest.com/tos/api/)  # Versioning This API follows [semantic versioning](https://semver.org/), which follows the `Major`.`Minor`.`Patch` format.  * The `Major` number increments when potentially incompatible changes are made. * The `Minor` number increments when backwards-compatible additions are made. * The `Patch` number increments when backwards-compatible bug-fixes are made. 
*
* The version of the OpenAPI document: 0.14.2
* Contact: support@tractionguest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "TGCustomField.h"
#import "TGEmailTemplate.h"
#import "TGGroupVisit.h"
#import "TGHost.h"
#import "TGInviteWatchlist.h"
#import "TGLocation.h"
#import "TGNotificationTrigger.h"
#import "TGRegistration.h"
@protocol TGCustomField;
@class TGCustomField;
@protocol TGEmailTemplate;
@class TGEmailTemplate;
@protocol TGGroupVisit;
@class TGGroupVisit;
@protocol TGHost;
@class TGHost;
@protocol TGInviteWatchlist;
@class TGInviteWatchlist;
@protocol TGLocation;
@class TGLocation;
@protocol TGNotificationTrigger;
@class TGNotificationTrigger;
@protocol TGRegistration;
@class TGRegistration;



@protocol TGInviteDetail
@end

@interface TGInviteDetail : TGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) TGRegistration* registration;
/* Phone number [optional]
 */
@property(nonatomic) NSString* mobileNumber;

@property(nonatomic) TGEmailTemplate* emailTemplate;

@property(nonatomic) TGInviteWatchlist* inviteWatchlist;
/* List of scheduled notifications for an invite [optional]
 */
@property(nonatomic) NSArray<TGNotificationTrigger>* notificationTriggers;

@property(nonatomic) NSArray<TGCustomField>* customFields;

@property(nonatomic) NSString* watchlistColour;

@property(nonatomic) TGLocation* location;

@property(nonatomic) NSArray<TGHost>* hosts;

@property(nonatomic) NSDate* startDate;

@property(nonatomic) NSString* lastName;

@property(nonatomic) NSString* firstName;

@property(nonatomic) NSDate* endDate;

@property(nonatomic) NSString* email;

@property(nonatomic) NSDate* createdAt;

@property(nonatomic) NSString* company;

@property(nonatomic) NSNumber* checkedIn;

@property(nonatomic) TGGroupVisit* groupVisit;

@end
