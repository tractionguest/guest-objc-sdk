#import "TGGroupVisitUpdateParams.h"

@implementation TGGroupVisitUpdateParams

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"name": @"name", @"startTime": @"start_time", @"endTime": @"end_time", @"locationId": @"location_id", @"registrationLimit": @"registration_limit", @"manualRegistrationApproval": @"manual_registration_approval", @"publicRegistrationEnabled": @"public_registration_enabled", @"hostIds": @"host_ids", @"inviteIds": @"invite_ids", @"refreshRegistrationUrl": @"refresh_registration_url" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"name", @"startTime", @"endTime", @"locationId", @"registrationLimit", @"manualRegistrationApproval", @"publicRegistrationEnabled", @"hostIds", @"inviteIds", @"refreshRegistrationUrl"];
  return [optionalProperties containsObject:propertyName];
}

@end
