/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSString;

@interface IDSServiceMonitor : NSObject {
    int _availability;
    NSString *_service;
    int _token;
}

@property(readonly) NSString * service;

- (void)_postAvailability:(int)arg1;
- (void)_updateAvailability;
- (void)dealloc;
- (void)handleActiveAccountsChanged:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)service;
- (int)serviceAvailability;
- (void)updateAvailability;

@end
