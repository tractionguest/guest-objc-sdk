#import "TGGroupVisitsApi.h"
#import "TGQueryParamCollection.h"
#import "TGApiClient.h"
#import "TGErrorsList.h"
#import "TGGroupVisit.h"
#import "TGGroupVisitCreateParams.h"
#import "TGGroupVisitUpdateParams.h"
#import "TGPaginatedGroupVisitsList.h"


@interface TGGroupVisitsApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation TGGroupVisitsApi

NSString* kTGGroupVisitsApiErrorDomain = @"TGGroupVisitsApiErrorDomain";
NSInteger kTGGroupVisitsApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    return [self initWithApiClient:[TGApiClient sharedClient]];
}


-(instancetype) initWithApiClient:(TGApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _mutableDefaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.mutableDefaultHeaders[key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.mutableDefaultHeaders setValue:value forKey:key];
}

-(NSDictionary *)defaultHeaders {
    return self.mutableDefaultHeaders;
}

#pragma mark - Api Methods

///
/// Create a new Group Visit (Appointment)
/// Creates a `GroupVisit` (Appointment)
///  @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it's submitted. We store idempotency keys for only 24 hours. Any `Idempotency-Key` shorter than 10 characters will be ignored (optional)
///
///  @param groupVisitCreateParams  (optional)
///
///  @returns TGGroupVisit*
///
-(NSURLSessionTask*) createGroupVisitWithIdempotencyKey: (NSString*) idempotencyKey
    groupVisitCreateParams: (TGGroupVisitCreateParams*) groupVisitCreateParams
    completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/group_visits"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (idempotencyKey != nil) {
        headerParams[@"Idempotency-Key"] = idempotencyKey;
    }
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"TractionGuestAuth"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = groupVisitCreateParams;

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"TGGroupVisit*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((TGGroupVisit*)data, error);
                                }
                            }];
}

///
/// Delete a Group Visit (Appointment)
/// Deletes a single instance of `GroupVisit` (Appointment).
///  @param groupVisitId  
///
///  @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it's submitted. We store idempotency keys for only 24 hours. Any `Idempotency-Key` shorter than 10 characters will be ignored (optional)
///
///  @returns void
///
-(NSURLSessionTask*) deleteGroupVisitWithGroupVisitId: (NSString*) groupVisitId
    idempotencyKey: (NSString*) idempotencyKey
    completionHandler: (void (^)(NSError* error)) handler {
    // verify the required parameter 'groupVisitId' is set
    if (groupVisitId == nil) {
        NSParameterAssert(groupVisitId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"groupVisitId"] };
            NSError* error = [NSError errorWithDomain:kTGGroupVisitsApiErrorDomain code:kTGGroupVisitsApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/group_visits/{group_visit_id}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (groupVisitId != nil) {
        pathParams[@"group_visit_id"] = groupVisitId;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (idempotencyKey != nil) {
        headerParams[@"Idempotency-Key"] = idempotencyKey;
    }
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"TractionGuestAuth"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"DELETE"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: nil
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler(error);
                                }
                            }];
}

///
/// Get a Group Visit (Appointment)
/// Gets the details of a single instance of a `GroupVisit`.
///  @param groupVisitId  
///
///  @returns TGGroupVisit*
///
-(NSURLSessionTask*) getGroupVisitWithGroupVisitId: (NSString*) groupVisitId
    completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler {
    // verify the required parameter 'groupVisitId' is set
    if (groupVisitId == nil) {
        NSParameterAssert(groupVisitId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"groupVisitId"] };
            NSError* error = [NSError errorWithDomain:kTGGroupVisitsApiErrorDomain code:kTGGroupVisitsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/group_visits/{group_visit_id}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (groupVisitId != nil) {
        pathParams[@"group_visit_id"] = groupVisitId;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"TractionGuestAuth"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"TGGroupVisit*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((TGGroupVisit*)data, error);
                                }
                            }];
}

///
/// List all Group Visits (Appointments)
/// Gets a list of all `GroupVisit` entities (Appointments).
///  @param limit Limits the results to a specified number. Defaults to 50. (optional)
///
///  @param offset Offsets the results to a specified number. Defaults to 0. (optional)
///
///  @param locationIds A comma-separated string of locations IDs, to only show group visits (appointments) from those locations. (optional)
///
///  @param sortWith A combination of attribute and direction, joined with an underscore, for sorting. Valid attributes are: `created_at`, `updated_at`, `name`, and `start_time`. Valid directions are `asc` and `desc`. E.g., `name_desc`, `start_time_asc`. (optional)
///
///  @returns TGPaginatedGroupVisitsList*
///
-(NSURLSessionTask*) getGroupVisitsWithLimit: (NSString*) limit
    offset: (NSString*) offset
    locationIds: (NSString*) locationIds
    sortWith: (NSString*) sortWith
    completionHandler: (void (^)(TGPaginatedGroupVisitsList* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/group_visits"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (limit != nil) {
        queryParams[@"limit"] = limit;
    }
    if (offset != nil) {
        queryParams[@"offset"] = offset;
    }
    if (locationIds != nil) {
        queryParams[@"location_ids"] = locationIds;
    }
    if (sortWith != nil) {
        queryParams[@"sort_with"] = sortWith;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"TractionGuestAuth"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"TGPaginatedGroupVisitsList*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((TGPaginatedGroupVisitsList*)data, error);
                                }
                            }];
}

///
/// Update a Group Visit (Appointment)
/// Updates an existing `GroupVisit` (Appointment).
///  @param groupVisitId  
///
///  @param idempotencyKey An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it's submitted. We store idempotency keys for only 24 hours. Any `Idempotency-Key` shorter than 10 characters will be ignored (optional)
///
///  @param groupVisitUpdateParams  (optional)
///
///  @returns TGGroupVisit*
///
-(NSURLSessionTask*) updateGroupVisitWithGroupVisitId: (NSString*) groupVisitId
    idempotencyKey: (NSString*) idempotencyKey
    groupVisitUpdateParams: (TGGroupVisitUpdateParams*) groupVisitUpdateParams
    completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler {
    // verify the required parameter 'groupVisitId' is set
    if (groupVisitId == nil) {
        NSParameterAssert(groupVisitId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"groupVisitId"] };
            NSError* error = [NSError errorWithDomain:kTGGroupVisitsApiErrorDomain code:kTGGroupVisitsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/group_visits/{group_visit_id}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (groupVisitId != nil) {
        pathParams[@"group_visit_id"] = groupVisitId;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (idempotencyKey != nil) {
        headerParams[@"Idempotency-Key"] = idempotencyKey;
    }
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"TractionGuestAuth"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = groupVisitUpdateParams;

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"PUT"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"TGGroupVisit*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((TGGroupVisit*)data, error);
                                }
                            }];
}



@end
