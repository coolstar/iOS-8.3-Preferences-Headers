/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PSSpecifierGroupController.h"
#import "UsageFeedDelegate.h"

@class NSString, NSArray, NSDictionary, PSExpandableAppListGroupController, NSNumber;

__attribute__((visibility("hidden")))
@interface PSAppCellularUsageGroupController : XXUnknownSuperclass <UsageFeedDelegate, PSSpecifierGroupController> {
	NSArray* _cellularDataSwitches;
	BOOL _showInternalDetails;
	BOOL _cancelled;
	BOOL _enabled;
	NSNumber* _totalBytesUsed;
	NSNumber* _totalRoamingBytesUsed;
	PSExpandableAppListGroupController* _appGroupController;
@private
	NSDictionary* _systemServiceCategoryNames;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDictionary* systemServiceCategoryNames;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(assign, getter=isCancelled) BOOL cancelled;
@property(assign, nonatomic) BOOL showInternalDetails;
@property(retain, nonatomic) PSExpandableAppListGroupController* appGroupController;
@property(retain, nonatomic) NSNumber* totalRoamingBytesUsed;
@property(retain, nonatomic) NSNumber* totalBytesUsed;
-(void)_createAppSpecifiersForVisibleApps:(id)visibleApps hiddenApps:(id)apps unknownApps:(id)apps3 internalProcesses:(id)processes;
-(void)_categorizeApps:(id)apps completion:(id)completion;
-(id)alwaysDisplayedBundleIdentifiers;
-(id)forcedBundleIdentiferForBundleIdentifier:(id)bundleIdentifier;
-(void)_calculateUsageForSubscriberIdentifier:(id)subscriberIdentifier inWorkspace:(id)workspace;
-(void)_updateTotalBytesUsed:(double)used roamingBytesUsed:(double)used2;
-(id)specifierForSpecialCategory:(id)specialCategory bytesUsed:(id)used;
-(id)nameForSpecialCategory:(id)specialCategory;
-(id)specifierForApp:(id)app enabled:(BOOL)enabled;
-(id)dataUsageForApplicationSpecifier:(id)applicationSpecifier;
-(id)appCellularDataEnabledForSpecifier:(id)specifier;
-(void)setAppCellularDataEnabled:(id)enabled forSpecifier:(id)specifier;
-(void)setSwitchesEnabled:(BOOL)enabled;
-(void)setWorkspaceInformation:(id)information;
-(void)cancel;
-(id)specifiers;
-(void)dealloc;
-(id)initWithListController:(id)listController groupSpecifier:(id)specifier;
@end
