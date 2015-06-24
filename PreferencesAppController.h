/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Preferences-Structs.h"
#import "UIApplicationDelegate.h"
#import "PSSplitViewControllerNavigationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UISplitViewControllerDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "EAAccessoryDelegate.h"

@class NSString, UIWindow, NSMutableSet, PrefsRootController, PSSplitViewController, EAAccessory;

__attribute__((visibility("hidden")))
@interface PreferencesAppController : XXUnknownSuperclass <PSSplitViewControllerNavigationDelegate, UIApplicationDelegate, EAAccessoryDelegate, MCProfileConnectionObserver, UISplitViewControllerDelegate> {
	PSSplitViewController* _splitViewController;
	PrefsRootController* _controller;
	UIWindow* _window;
	BOOL _isLocked;
	NSMutableSet* _busyControllers;
	BOOL _loadingExternalURL;
	unsigned _backgroundTaskHandle;
	double _timeoutLimit;
	BOOL _settingsWasResigned;
	unsigned _rootDomainConnect;
	unsigned _pmNotifier;
	IONotificationPortRef _systemPowerPortRef;
	CFRunLoopSourceRef _pmSource;
	EAAccessory* _speakerAccessory;
}
@property(retain, nonatomic) UIWindow* window;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) unsigned rootDomainConnect;
-(void)splitViewControllerDidPopToRootController:(id)splitViewController;
-(BOOL)splitViewController:(id)controller collapseSecondaryViewController:(id)controller2 ontoPrimaryViewController:(id)controller3;
-(id)splitViewController:(id)controller separateSecondaryViewControllerFromPrimaryViewController:(id)primaryViewController;
-(void)accessoryDidDisconnect:(id)accessory;
-(void)_accessoryDidConnect:(id)_accessory;
-(void)_deregisterForPowerNotifications;
-(void)_registerForPowerNotifications;
-(void)dealloc;
-(double)defaultImageSnapshotExpiration;
-(void)resetLocale;
-(void)significantTimeChange;
-(void)systemDidWake:(id)system;
-(void)_resetSnapshotImage;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)_handleExternalApplicationChange;
-(void)_suspendControllers;
-(void)_handleBusyControllers;
-(void)controllerFinished:(id)finished;
-(void)endAndInvalidateBackgroundTask;
-(void)addBusyControllersFromRootController:(id)rootController;
-(id)oneTimeJumpURL;
-(void)_clearSavedPositionURL;
-(void)generateURL;
-(id)currentSpecifierIDPath;
-(void)_performURLHandlingForController:(id)controller dictionary:(id)dictionary items:(id)items controllerNeedsPush:(BOOL)push;
-(void)_setOffsetForController:(id)controller fromObjectPair:(id)objectPair;
-(void)processAppPrefsURL:(id)url;
-(void)handleDeferredURLForSpecifierID:(id)specifierID resourceDictionary:(id)dictionary;
-(void)handleDeferredURLForSpecifierID:(id)specifierID resourceDictionary:(id)dictionary objectOffsetPair:(id)pair;
-(void)processURL:(id)url animated:(BOOL)animated fromSearch:(BOOL)search;
-(void)processURL:(id)url;
-(void)applicationOpenURL:(id)url;
-(id)keyValueDictionaryForURL:(id)url;
-(void)applicationDidResumeForEventsOnly;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationWillResignActive:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillTerminate:(id)application;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(void)handleFamilyInviteChanged;
-(void)updateFamilyInviteBadge;
-(void)updateSoftwareUpdateBadgeOnSpecifier:(id)specifier;
-(void)runScrollTest:(id)test withOptions:(id)options;
-(BOOL)runTest:(id)test options:(id)options;
-(void)popToRootOfSettingsSelectGeneral:(BOOL)settingsSelectGeneral performWithoutDeferringTransitions:(BOOL)transitions;
-(void)popToRootOfSettingsSelectGeneral:(BOOL)settingsSelectGeneral;
-(void)clearControllersForSuspendedState;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)profileConnection userInfo:(id)info;
-(id)appWindow;
-(void)stopPlayback;
-(id)rootController;
-(id)preferredContentSizeCategory;
@end
