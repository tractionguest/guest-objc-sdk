#import "TGInvite.h"

@implementation TGInvite

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"registration": @"registration", @"mobileNumber": @"mobile_number", @"email": @"email", @"endDate": @"end_date", @"endDateUtc": @"end_date_utc", @"inviteWatchlist": @"invite_watchlist", @"hosts": @"hosts", @"watchlistColour": @"watchlist_colour", @"location": @"location", @"startDate": @"start_date", @"startDateUtc": @"start_date_utc", @"lastName": @"last_name", @"firstName": @"first_name", @"groupVisit": @"group_visit" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"registration", @"mobileNumber", @"endDate", @"endDateUtc", @"inviteWatchlist", @"hosts", @"watchlistColour", @"location", @"startDate", @"startDateUtc", @"groupVisit"];
  return [optionalProperties containsObject:propertyName];
}

@end
