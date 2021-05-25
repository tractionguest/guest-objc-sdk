# TGRegistrationsApi

All URIs are relative to *https://us.tractionguest.com/api/v3*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRegistration**](TGRegistrationsApi.md#getregistration) | **GET** /registrations/{registration_id} | Get a Registration
[**getRegistrations**](TGRegistrationsApi.md#getregistrations) | **GET** /registrations | List all Registrations


# **getRegistration**
```objc
-(NSURLSessionTask*) getRegistrationWithRegistrationId: (NSString*) registrationId
    include: (NSString*) include
        completionHandler: (void (^)(TGRegistrationDetail* output, NSError* error)) handler;
```

Get a Registration

Gets the details of a single instance of a `Registration`

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


NSString* registrationId = @"registrationId_example"; // 
NSString* include = @"include_example"; // A list of comma-separated related models to include (optional)

TGRegistrationsApi*apiInstance = [[TGRegistrationsApi alloc] init];

// Get a Registration
[apiInstance getRegistrationWithRegistrationId:registrationId
              include:include
          completionHandler: ^(TGRegistrationDetail* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling TGRegistrationsApi->getRegistration: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **registrationId** | **NSString***|  | 
 **include** | **NSString***| A list of comma-separated related models to include | [optional] 

### Return type

[**TGRegistrationDetail***](TGRegistrationDetail.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getRegistrations**
```objc
-(NSURLSessionTask*) getRegistrationsWithLimit: (NSNumber*) limit
    offset: (NSNumber*) offset
    locationIds: (NSString*) locationIds
    createdBefore: (NSString*) createdBefore
    createdAfter: (NSString*) createdAfter
    needsConfirmation: (NSNumber*) needsConfirmation
        completionHandler: (void (^)(TGPaginatedRegistrationsList* output, NSError* error)) handler;
```

List all Registrations

Gets a list of all `Registration` entities.

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


NSNumber* limit = @56; // Limits the results to a specified number, defaults to 50 (optional)
NSNumber* offset = @56; // Offsets the results to a specified number, defaults to 0 (optional)
NSString* locationIds = @"locationIds_example"; // A comma separated list of Location IDs (optional)
NSString* createdBefore = @"createdBefore_example"; // Restricts results to only those that were created before the provided date (optional)
NSString* createdAfter = @"createdAfter_example"; // Restricts results to only those that were created after the provided date (optional)
NSNumber* needsConfirmation = @56; // A confirmed `Registration` is one with an associated `Invite`. This filter returns those without an `Invite` when true, and those with an `Invite` when false. (optional)

TGRegistrationsApi*apiInstance = [[TGRegistrationsApi alloc] init];

// List all Registrations
[apiInstance getRegistrationsWithLimit:limit
              offset:offset
              locationIds:locationIds
              createdBefore:createdBefore
              createdAfter:createdAfter
              needsConfirmation:needsConfirmation
          completionHandler: ^(TGPaginatedRegistrationsList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling TGRegistrationsApi->getRegistrations: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | **NSNumber***| Limits the results to a specified number, defaults to 50 | [optional] 
 **offset** | **NSNumber***| Offsets the results to a specified number, defaults to 0 | [optional] 
 **locationIds** | **NSString***| A comma separated list of Location IDs | [optional] 
 **createdBefore** | **NSString***| Restricts results to only those that were created before the provided date | [optional] 
 **createdAfter** | **NSString***| Restricts results to only those that were created after the provided date | [optional] 
 **needsConfirmation** | **NSNumber***| A confirmed &#x60;Registration&#x60; is one with an associated &#x60;Invite&#x60;. This filter returns those without an &#x60;Invite&#x60; when true, and those with an &#x60;Invite&#x60; when false. | [optional] 

### Return type

[**TGPaginatedRegistrationsList***](TGPaginatedRegistrationsList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

