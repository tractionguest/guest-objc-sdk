# TGBatchesApi

All URIs are relative to *https://us.tractionguest.com/api/v3*

Method | HTTP request | Description
------------- | ------------- | -------------
[**batchDeleteInvites**](TGBatchesApi.md#batchdeleteinvites) | **POST** /invites/batch_delete | Delete Multiple Invites
[**getBatch**](TGBatchesApi.md#getbatch) | **GET** /batches/{batch_id} | Get a BatchJob


# **batchDeleteInvites**
```objc
-(NSURLSessionTask*) batchDeleteInvitesWithIdentifierList: (TGIdentifierList*) identifierList
        completionHandler: (void (^)(TGBatchJob* output, NSError* error)) handler;
```

Delete Multiple Invites

Queues up a \"delete\" background task for one or more `Invite` entities.

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


TGIdentifierList* identifierList = [[TGIdentifierList alloc] init]; //  (optional)

TGBatchesApi*apiInstance = [[TGBatchesApi alloc] init];

// Delete Multiple Invites
[apiInstance batchDeleteInvitesWithIdentifierList:identifierList
          completionHandler: ^(TGBatchJob* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling TGBatchesApi->batchDeleteInvites: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **identifierList** | [**TGIdentifierList***](TGIdentifierList.md)|  | [optional] 

### Return type

[**TGBatchJob***](TGBatchJob.md)

### Authorization

[TractionGuestAuth](../README.md#TractionGuestAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getBatch**
```objc
-(NSURLSessionTask*) getBatchWithBatchId: (NSString*) batchId
        completionHandler: (void (^)(TGBatchJob* output, NSError* error)) handler;
```

Get a BatchJob

Retrieve a given `BatchJob` entity.

### Example 
```objc
TGDefaultConfiguration *apiConfig = [TGDefaultConfiguration sharedConfig];


NSString* batchId = @"batchId_example"; // 

TGBatchesApi*apiInstance = [[TGBatchesApi alloc] init];

// Get a BatchJob
[apiInstance getBatchWithBatchId:batchId
          completionHandler: ^(TGBatchJob* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling TGBatchesApi->getBatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **batchId** | **NSString***|  | 

### Return type

[**TGBatchJob***](TGBatchJob.md)

### Authorization

[TractionGuestAuth](../README.md#TractionGuestAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

