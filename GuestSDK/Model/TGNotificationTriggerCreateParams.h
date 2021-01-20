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





@protocol TGNotificationTriggerCreateParams
@end

@interface TGNotificationTriggerCreateParams : TGObject

/* Whether the offset should be calculated as `days` or `hours` 
 */
@property(nonatomic) NSString* offsetUnit;
/* An array made of only `INVITEE`, `HOSTS, or `LEP` as possible string values 
 */
@property(nonatomic) NSArray<NSString*>* notificationGroups;

@property(nonatomic) NSNumber* emailTemplateId;
/* Whether the offset should be calculated from the start, or finish of the event 
 */
@property(nonatomic) NSString* offsetOrigin;
/* The amount to offset the notification from the event 
 */
@property(nonatomic) NSNumber* offsetAmount;
/* Whether the offset should be calculated for before, or after the event 
 */
@property(nonatomic) NSString* offsetDirection;

@end
