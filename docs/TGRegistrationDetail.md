# TGRegistrationDetail

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_id** | **NSString*** | Registration unique identifier | 
**visitor** | [**TGVisitor***](TGVisitor.md) |  | [optional] 
**invite** | [**TGInvite***](TGInvite.md) |  | [optional] 
**guestResponses** | [**NSArray&lt;TGGuestResponse&gt;***](TGGuestResponse.md) | Response given by the guest | [optional] 
**photoUrl** | **NSString*** | URL of the uploaded photo | [optional] 
**company** | **NSString*** | Company&#39;s name | [optional] 
**email** | **NSString*** | E-mail | [optional] 
**name** | **NSString*** | Guest&#39;s name | [optional] 
**createdAt** | **NSDate*** | Datetime when registration was created | 
**signin** | [**TGSignin***](TGSignin.md) |  | [optional] 
**status** | **NSString*** | An enum describing the state of the &#x60;Registration&#x60; which can have one of the following: not_started, started, completed, rejected, signed_in signed_out | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


