/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSStyle<TSSPreset>, TSSTheme;

@interface TSSThemeReplaceStylePresetCommand : TSKCommand <TSDPropagatableCommand> {
    unsigned int mIndex;
    TSSStyle<TSSPreset> *mOldPreset;
    TSSStyle<TSSPreset> *mPreset;
    TSSTheme *mTheme;
}

@property(readonly) TSSStyle<TSSPreset> * oldPreset;
@property(readonly) TSSStyle<TSSPreset> * preset;

- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTheme:(id)arg1 preset:(id)arg2 index:(unsigned int)arg3 context:(id)arg4;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (id)oldPreset;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (id)preset;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)undo;

@end
