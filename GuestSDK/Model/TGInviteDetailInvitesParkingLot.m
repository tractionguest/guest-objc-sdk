#import "TGInviteDetailInvitesParkingLot.h"

@implementation TGInviteDetailInvitesParkingLot

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"stallNumber": @"stall_number", @"stallType": @"stall_type", @"parkingLotName": @"parking_lot_name", @"parkingLotId": @"parking_lot_id", @"parkingStallId": @"parking_stall_id" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"stallNumber", @"stallType", @"parkingLotName", @"parkingLotId", @"parkingStallId"];
  return [optionalProperties containsObject:propertyName];
}

@end
