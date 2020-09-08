#import <Foundation/Foundation.h>
#import "TGObject.h"

/**
* Traction Guest API
* The Traction Guest API is currently under limited release to select customers as we gather and iterate on feedback.  # Getting Started If you are interested in getting early access to the API, please send us an email to [support@tractionguest.com](mailto:support@tractionguest.com).  We will also add you to our Slack channel where you can ask questions and get further help.  # Terms and Conditions Please visit: [https://tractionguest.com/tos/api/](https://tractionguest.com/tos/api/)  # Versioning This API follows [semantic versioning](https://semver.org/), which follows the `Major`.`Minor`.`Patch` format.  * The `Major` number increments when potentially incompatible changes are made. * The `Minor` number increments when backwards-compatible additions are made. * The `Patch` number increments when backwards-compatible bug-fixes are made. 
*
* The version of the OpenAPI document: 0.14.0
* Contact: support@tractionguest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "TGHost.h"
#import "TGImage.h"
#import "TGLocation.h"
@protocol TGHost;
@class TGHost;
@protocol TGImage;
@class TGImage;
@protocol TGLocation;
@class TGLocation;



@protocol TGPackage
@end

@interface TGPackage : TGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) TGHost* recipient;

@property(nonatomic) TGLocation* location;
/* this can be one of the following states: 'processing', 'recipient_matched', 'needs_attention' or 'picked_up' 
 */
@property(nonatomic) NSString* packageState;
/* A carrier name that gets detected on the shipping label. i.e. USPS, Purolator, DHL, Canada Post, Royal Mail, etc...  [optional]
 */
@property(nonatomic) NSString* carrierName;

@property(nonatomic) NSDate* pickedUpAt;

@property(nonatomic) NSDate* createdAt;

@property(nonatomic) TGImage* image;

@end
