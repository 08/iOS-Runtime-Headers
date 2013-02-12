/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class <WEWeiboSheetLocationAssemblyDelegate>, NSDictionary, UIButton, UIImageView, UIView;

@interface SLWeiboSheetLocationAssembly : NSObject {
    UIView *_assemblyView;
    UIButton *_cancelLocationButton;
    int _geotagStatus;
    <WEWeiboSheetLocationAssemblyDelegate> *_locationAssemblyDelegate;
    UIButton *_locationButton;
    UIImageView *_locationImageView;
    NSDictionary *_locationInfo;
    UIButton *_locationLabel;
    BOOL _usingLocationOverride;
}

@property(readonly) UIView * assemblyView;
@property int geotagStatus;
@property <WEWeiboSheetLocationAssemblyDelegate> * locationAssemblyDelegate;
@property(readonly) struct CGSize { float x1; float x2; } locationImageSize;
@property(retain) NSDictionary * locationInfo;
@property BOOL usingLocationOverride;

- (void).cxx_destruct;
- (void)_setLocationLabelText:(id)arg1;
- (void)_updateAssembly;
- (void)_updateLocationImage;
- (id)assemblyView;
- (void)cancelLocationButtonTapped:(id)arg1;
- (int)geotagStatus;
- (id)init;
- (id)locationAssemblyDelegate;
- (void)locationButtonTapped:(id)arg1;
- (struct CGSize { float x1; float x2; })locationImageSize;
- (id)locationInfo;
- (void)setGeotagStatus:(int)arg1;
- (void)setLocationAssemblyDelegate:(id)arg1;
- (void)setLocationInfo:(id)arg1;
- (void)setUsingLocationOverride:(BOOL)arg1;
- (BOOL)usingLocationOverride;

@end