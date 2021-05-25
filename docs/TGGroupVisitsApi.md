# TGGroupVisitsApi

All URIs are relative to *https://us.tractionguest.com/api/v3*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createGroupVisit**](TGGroupVisitsApi.md#creategroupvisit) | **POST** /group_visits | Create a new Group Visit (Appointment)
[**deleteGroupVisit**](TGGroupVisitsApi.md#deletegroupvisit) | **DELETE** /group_visits/{group_visit_id} | Delete a Group Visit (Appointment)
[**getGroupVisit**](TGGroupVisitsApi.md#getgroupvisit) | **GET** /group_visits/{group_visit_id} | Get a Group Visit (Appointment)
[**getGroupVisits**](TGGroupVisitsApi.md#getgroupvisits) | **GET** /group_visits | List all Group Visits (Appointments)
[**updateGroupVisit**](TGGroupVisitsApi.md#updategroupvisit) | **PUT** /group_visits/{group_visit_id} | Update a Group Visit (Appointment)


# **createGroupVisit**
```objc
-(NSURLSessionTask*) createGroupVisitWithIdempotencyKey: (NSString*) idempotencyKey
    groupVisitCreateParams: (TGGroupVisitCreateParams*) groupVisitCreateParams
        completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler;
```

Create a new Group Visit (Appointment)

Creates a `GroupVisit` (Appointment)

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


NSString* idempotencyKey = @"idempotencyKey_example"; // An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it's submitted. We store idempotency keys for only 24 hours. Any `Idempotency-Key` shorter than 10 characters will be ignored (optional)
TGGroupVisitCreateParams* groupVisitCreateParams = [[TGGroupVisitCreateParams alloc] init]; //  (optional)

TGGroupVisitsApi*apiInstance = [[TGGroupVisitsApi alloc] init];

// Create a new Group Visit (Appointment)
[apiInstance createGroupVisitWithIdempotencyKey:idempotencyKey
              groupVisitCreateParams:groupVisitCreateParams
          completionHandler: ^(TGGroupVisit* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling TGGroupVisitsApi->createGroupVisit: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **idempotencyKey** | **NSString***| An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored | [optional] 
 **groupVisitCreateParams** | [**TGGroupVisitCreateParams***](TGGroupVisitCreateParams.md)|  | [optional] 

### Return type

[**TGGroupVisit***](TGGroupVisit.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteGroupVisit**
```objc
-(NSURLSessionTask*) deleteGroupVisitWithGroupVisitId: (NSString*) groupVisitId
    idempotencyKey: (NSString*) idempotencyKey
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a Group Visit (Appointment)

Deletes a single instance of `GroupVisit` (Appointment).

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


NSString* groupVisitId = @"groupVisitId_example"; // 
NSString* idempotencyKey = @"idempotencyKey_example"; // An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it's submitted. We store idempotency keys for only 24 hours. Any `Idempotency-Key` shorter than 10 characters will be ignored (optional)

TGGroupVisitsApi*apiInstance = [[TGGroupVisitsApi alloc] init];

// Delete a Group Visit (Appointment)
[apiInstance deleteGroupVisitWithGroupVisitId:groupVisitId
              idempotencyKey:idempotencyKey
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling TGGroupVisitsApi->deleteGroupVisit: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **groupVisitId** | **NSString***|  | 
 **idempotencyKey** | **NSString***| An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupVisit**
```objc
-(NSURLSessionTask*) getGroupVisitWithGroupVisitId: (NSString*) groupVisitId
        completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler;
```

Get a Group Visit (Appointment)

Gets the details of a single instance of a `GroupVisit`.

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


NSString* groupVisitId = @"groupVisitId_example"; // 

TGGroupVisitsApi*apiInstance = [[TGGroupVisitsApi alloc] init];

// Get a Group Visit (Appointment)
[apiInstance getGroupVisitWithGroupVisitId:groupVisitId
          completionHandler: ^(TGGroupVisit* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling TGGroupVisitsApi->getGroupVisit: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **groupVisitId** | **NSString***|  | 

### Return type

[**TGGroupVisit***](TGGroupVisit.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getGroupVisits**
```objc
-(NSURLSessionTask*) getGroupVisitsWithLimit: (NSString*) limit
    offset: (NSString*) offset
    locationIds: (NSString*) locationIds
    sortWith: (NSString*) sortWith
        completionHandler: (void (^)(TGPaginatedGroupVisitsList* output, NSError* error)) handler;
```

List all Group Visits (Appointments)

Gets a list of all `GroupVisit` entities (Appointments).

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


NSString* limit = @"limit_example"; // Limits the results to a specified number. Defaults to 50. (optional)
NSString* offset = @"offset_example"; // Offsets the results to a specified number. Defaults to 0. (optional)
NSString* locationIds = @"locationIds_example"; // A comma-separated string of locations IDs, to only show group visits (appointments) from those locations. (optional)
NSString* sortWith = @"sortWith_example"; // A combination of attribute and direction, joined with an underscore, for sorting. Valid attributes are: `created_at`, `updated_at`, `name`, and `start_time`. Valid directions are `asc` and `desc`. E.g., `name_desc`, `start_time_asc`. (optional)

TGGroupVisitsApi*apiInstance = [[TGGroupVisitsApi alloc] init];

// List all Group Visits (Appointments)
[apiInstance getGroupVisitsWithLimit:limit
              offset:offset
              locationIds:locationIds
              sortWith:sortWith
          completionHandler: ^(TGPaginatedGroupVisitsList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling TGGroupVisitsApi->getGroupVisits: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **NSString***| Limits the results to a specified number. Defaults to 50. | [optional] 
 **offset** | **NSString***| Offsets the results to a specified number. Defaults to 0. | [optional] 
 **locationIds** | **NSString***| A comma-separated string of locations IDs, to only show group visits (appointments) from those locations. | [optional] 
 **sortWith** | **NSString***| A combination of attribute and direction, joined with an underscore, for sorting. Valid attributes are: &#x60;created_at&#x60;, &#x60;updated_at&#x60;, &#x60;name&#x60;, and &#x60;start_time&#x60;. Valid directions are &#x60;asc&#x60; and &#x60;desc&#x60;. E.g., &#x60;name_desc&#x60;, &#x60;start_time_asc&#x60;. | [optional] 

### Return type

[**TGPaginatedGroupVisitsList***](TGPaginatedGroupVisitsList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateGroupVisit**
```objc
-(NSURLSessionTask*) updateGroupVisitWithGroupVisitId: (NSString*) groupVisitId
    idempotencyKey: (NSString*) idempotencyKey
    groupVisitUpdateParams: (TGGroupVisitUpdateParams*) groupVisitUpdateParams
        completionHandler: (void (^)(TGGroupVisit* output, NSError* error)) handler;
```

Update a Group Visit (Appointment)

Updates an existing `GroupVisit` (Appointment).

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


NSString* groupVisitId = @"groupVisitId_example"; // 
NSString* idempotencyKey = @"idempotencyKey_example"; // An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it's submitted. We store idempotency keys for only 24 hours. Any `Idempotency-Key` shorter than 10 characters will be ignored (optional)
TGGroupVisitUpdateParams* groupVisitUpdateParams = [[TGGroupVisitUpdateParams alloc] init]; //  (optional)

TGGroupVisitsApi*apiInstance = [[TGGroupVisitsApi alloc] init];

// Update a Group Visit (Appointment)
[apiInstance updateGroupVisitWithGroupVisitId:groupVisitId
              idempotencyKey:idempotencyKey
              groupVisitUpdateParams:groupVisitUpdateParams
          completionHandler: ^(TGGroupVisit* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling TGGroupVisitsApi->updateGroupVisit: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **groupVisitId** | **NSString***|  | 
 **idempotencyKey** | **NSString***| An optional idempotency key to allow for repeat API requests. Any API request with this key will only be executed once, no matter how many times it&#39;s submitted. We store idempotency keys for only 24 hours. Any &#x60;Idempotency-Key&#x60; shorter than 10 characters will be ignored | [optional] 
 **groupVisitUpdateParams** | [**TGGroupVisitUpdateParams***](TGGroupVisitUpdateParams.md)|  | [optional] 

### Return type

[**TGGroupVisit***](TGGroupVisit.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

