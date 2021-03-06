/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class _IDSIDQueryController;

@interface IDSIDQueryController : NSObject {
    _IDSIDQueryController *_internal;
}

+ (id)sharedInstance;

- (int)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (BOOL)_flushQueryCacheForService:(id)arg1;
- (BOOL)_hasCacheForService:(id)arg1;
- (BOOL)_warmupQueryCacheForService:(id)arg1;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (void)dealloc;
- (id)init;
- (BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (void)removeDelegate:(id)arg1;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;

@end
