/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputConfigurationState, AVWeakReference;



@interface AVAssetWriterInputHelper : NSObject 
{
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property(readonly) NSInteger status;
@property(readonly) NSString *mediaType;
@property(readonly) AVOutputSettings *outputSettings;
@property CGAffineTransform transform;
@property(copy) NSArray *metadata;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property BOOL expectsMediaDataInRealTime;
@property(copy) NSDictionary *sourcePixelBufferAttributes;
@property(readonly) __CVPixelBufferPool *pixelBufferPool;
@property(retain) AVWeakReference *weakReferenceToAssetWriterInput;
@property(readonly) AVAssetWriterInputConfigurationState *configurationState;


- (void)transitionToTerminalStatus:(NSInteger)arg1;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;
- (BOOL)isReadyForMoreMediaData;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)markAsFinished;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (id)weakReferenceToAssetWriterInput;
- (void)setWeakReferenceToAssetWriterInput:(id)arg1;
- (id)sourcePixelBufferAttributes;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (BOOL)expectsMediaDataInRealTime;
- (id)initWithConfigurationState:(id)arg1;
- (id)configurationState;
- (id)outputSettings;
- (void)setMetadata:(id)arg1;
- (NSInteger)status;
- (id)metadata;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)mediaType;

@end