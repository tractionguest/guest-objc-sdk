#import "TGWatchlistCreateParams.h"

@implementation TGWatchlistCreateParams

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"aliases": @"aliases", @"notes": @"notes", @"lastName": @"last_name", @"firstName": @"first_name", @"email": @"email", @"colour": @"colour", @"base64Image": @"base64_image", @"driverLicense": @"driver_license" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"aliases", @"notes", @"lastName", @"firstName", @"email", @"colour", @"base64Image", @"driverLicense"];
  return [optionalProperties containsObject:propertyName];
}

@end
