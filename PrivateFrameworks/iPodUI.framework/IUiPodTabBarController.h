/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUModalContext, NSArray, NSString, UIViewController, IUMoreListDelegateProxy;

@interface IUiPodTabBarController : UITabBarController <UINavigationControllerDelegate, ViewControllerArchiveNode> {
    unsigned int _allowsSearch : 1;
    int _archivedContextsToBeRestored;
    NSArray *_availableIdentifiers;
    NSString *_initialIdentifier;
    IUModalContext *_modalContext;
    IUMoreListDelegateProxy *_moreListDelegateProxy;
    IUModalContext *_presentedModalContext;
}

@property BOOL allowsSearch;
@property(readonly) NSArray * identifiers;
@property(retain) IUModalContext * modalContext;
@property(readonly) NSString * selectedIdentifier;
@property(readonly) UIViewController * topViewController;

+ (Class)_moreNavigationControllerClass;
+ (id)_newNavigationControllerWithRootContextIdentifier:(id)arg1;
+ (id)defaultIdentifiers;

- (BOOL)_canDisplayItemWithIdentifier:(id)arg1;
- (id)_copyTabBarOrdering;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_fixMoreListNavigationBar;
- (id)_navigationControllerForIdentifier:(id)arg1 outIndex:(unsigned int*)arg2;
- (BOOL)_pushContextForSpecifier:(id)arg1 unlessMatchesFinalIdentifier:(id)arg2 animated:(BOOL)arg3;
- (id)_rawSelectedIdentifier;
- (void)_reloadIPodViewControllers;
- (void)_setNavigationControllerDelegates:(id)arg1;
- (void)_setSelectedViewController:(id)arg1;
- (BOOL)_shouldPushContextDuringSwitch:(id)arg1;
- (void)_switchToContextBehindCurrentController:(id)arg1 withRootControllerIdentifier:(id)arg2 withPlaybackDataSource:(id)arg3;
- (void)_updateControllersAvailable;
- (void)_updateViewControllersModalContext;
- (BOOL)allowsSearch;
- (id)copyArchivableContexts;
- (void)dealloc;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (id)identifiers;
- (id)init;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1 initialIdentifier:(id)arg2 maximumNumberOfItems:(int)arg3;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1 initialIdentifier:(id)arg2;
- (id)initWithControllersWithAvailableIdentifiers:(id)arg1;
- (id)modalContext;
- (id)moreNavigationController;
- (void)presentModalContext:(id)arg1 animated:(BOOL)arg2;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (void)saveOrderingToDefaults;
- (void)selectControllerWithIdentifier:(id)arg1;
- (void)selectNextIdentifier;
- (id)selectedIdentifier;
- (void)setAllowsSearch:(BOOL)arg1;
- (void)setModalContext:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)switchToAlbumContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2;
- (void)switchToContext:(id)arg1 withRootControllerIdentifier:(id)arg2;
- (void)switchToPlaylistContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2 withPlaybackDataSource:(id)arg3;
- (void)switchToPlaylistContextForSpecifier:(id)arg1 behindTopController:(BOOL)arg2;
- (void)switchToShortcutIdentifier:(id)arg1;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (id)topViewController;
- (id)visibleCustomViewControllers;
- (void)willRestoreArchivedContexts:(id)arg1;

@end