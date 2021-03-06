/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPresenterDelegate>, ABContactPhotoView, CNContact, NSArray, NSDictionary, NSString, UIColor, UILabel, UITableView, UIView;

@interface ABContactHeaderView : UIView <UITableViewDelegate, UITableViewDataSource, ABPropertyGroupItemDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    NSString *_alternateName;
    UIColor *_backgroundColor;
    CNContact *_contact;
    } _contentMargins;
    <ABPresenterDelegate> *_delegate;
    BOOL _editing;
    NSArray *_editingGroups;
    UITableView *_editingTable;
    NSString *_message;
    UILabel *_nameLabel;
    NSDictionary *_nameTextAttributes;
    UIView *_personHeaderView;
    ABContactPhotoView *_photoView;
    UILabel *_taglineLabel;
    NSDictionary *_taglineTextAttributes;
}

@property(retain) NSString * alternateName;
@property(retain) UIColor * backgroundColor;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentMargins;
@property <ABPresenterDelegate> * delegate;
@property(getter=isEditing) BOOL editing;
@property(retain) NSArray * editingGroups;
@property(retain) NSString * message;
@property(copy) NSDictionary * nameTextAttributes;
@property(copy) NSDictionary * taglineTextAttributes;

+ (BOOL)requiresConstraintBasedLayout;

- (id)_headerStringForContact:(id)arg1;
- (float)_labelsVSpacing;
- (id)_taglineStringForContact:(id)arg1;
- (float)_topMarginToNameBaselineWithName:(id)arg1 tagline:(id)arg2;
- (void)_updatePhotoView;
- (id)alternateName;
- (id)backgroundColor;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentMargins;
- (id)contentViewConstraints;
- (id)contentViewEditingConstraints;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)editingGroups;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)initWithContact:(id)arg1 withEditingGroups:(id)arg2 personHeaderView:(id)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (BOOL)isEditing;
- (void)menuWillHide:(id)arg1;
- (id)message;
- (id)nameTextAttributes;
- (void)propertyItem:(id)arg1 didChangeValue:(id)arg2;
- (void)reloadData;
- (void)saveContactPhoto;
- (id)selectEditingGroupAtIndex:(unsigned int)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditingGroups:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (void)setTaglineTextAttributes:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)taglineTextAttributes;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateWithNewContact:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
