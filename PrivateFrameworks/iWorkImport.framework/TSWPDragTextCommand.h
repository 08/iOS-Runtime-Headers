/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDragTextCommand : TSWPTextCommand {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    BOOL _coalescing;
    } _dragRange;
    unsigned int _dropCharIndex;
}

@property BOOL coalescing;

- (id).cxx_construct;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (BOOL)coalescing;
- (void)doCommit;
- (id)initWithStorage:(id)arg1 srcSelection:(id)arg2 dropLocation:(unsigned int)arg3;
- (int)persistenceKind;
- (void)setCoalescing:(BOOL)arg1;
- (void)setSelection:(id)arg1 onStorage:(id)arg2 withFlags:(unsigned int)arg3;

@end
