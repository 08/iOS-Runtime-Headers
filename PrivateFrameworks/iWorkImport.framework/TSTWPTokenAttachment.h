/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSTExpressionNode;

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL mActive;
    struct CGImage { } *mCachedImage;
    float mCachedImageScreenScale;
    TSTExpressionNode *mExpressionNode;
    BOOL mInInvalidate;
    } mMenuRect;
    BOOL mNeverShowsMenu;
    BOOL mSelected;
    } mTextSize;
}

@property(getter=isActive) BOOL active;
@property struct CGImage { }* cachedImage;
@property float cachedImageScreenScale;
@property(retain) TSTExpressionNode * expressionNode;
@property(getter=neverShowsMenu) BOOL neverShowsMenu;
@property(getter=isSelected) BOOL selected;

- (id).cxx_construct;
- (struct CGImage { }*)cachedImage;
- (float)cachedImageScreenScale;
- (id)copyIntoContext:(id)arg1 bakeModes:(BOOL)arg2;
- (id)copyIntoContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)detokenizedText;
- (id)expressionNode;
- (id)formulaPlainText;
- (id)initFromArchive:(const struct TokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct UIGraphicalAttachment {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)isSelected;
- (BOOL)neverShowsMenu;
- (void)saveToArchive:(struct TokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct UIGraphicalAttachment {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setCachedImage:(struct CGImage { }*)arg1;
- (void)setCachedImageScreenScale:(float)arg1;
- (void)setExpressionNode:(id)arg1;
- (void)setNeverShowsMenu:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end
