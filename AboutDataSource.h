/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Preferences-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSLock, NSTimer, NSMutableDictionary, PSSpecifier;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface AboutDataSource : XXUnknownSuperclass {
	NSMutableDictionary* _mediaDict;
	PSSpecifier* _headsetSpecifier;
	PSSpecifier* _accessoryDividerSpecifier;
	NSString* _loading;
	NSTimer* _reloadTimer;
	BOOL _isGeneratingNotifications;
@private
	BOOL _threadRunning;
@protected
	BOOL _cancel;
	BOOL _loaded;
	BOOL _accessory;
	int _carrierCellState;
	id<NSObject> _photoVideoNotificationToken;
@private
	NSLock* _lock;
@protected
	BOOL _hasLoadedSpecifiers;
	NSString* _serviceProviderNameForSPN;
	int _simCellState;
}
-(void)reloadDeviceName;
-(void)_accessoryDidUpdate:(id)_accessory;
-(void)dealloc;
-(id)init;
-(void)simStatusChangedToReady;
-(void)mediaLibraryDidChange:(id)mediaLibrary;
-(void)enableMLUpdates:(BOOL)updates;
-(void)forceReloadMediaStats:(id)stats;
-(void)cleanupMLReloadTimer;
-(void)newCarrierNotification;
-(void)loadSpecifiers;
-(void)reloadSpecifiers;
-(BOOL)areSpecifiersLoaded;
-(void)_loadValues;
-(id)specifiersForSpecifier:(id)specifier observer:(id)observer;
-(id)deviceName:(id)name;
-(void)setDeviceName:(id)name specifier:(id)specifier;
-(id)_photos:(id)photos;
-(id)_videos:(id)videos;
-(id)_songs:(id)songs;
-(id)countForKey:(id)key;
-(void)_loadMediaFinished:(id)finished;
-(void)updateSIMSpecifier:(id)specifier;
-(void)updateCarrierSpecifier:(id)specifier;
-(id)_CSNString:(id)string;
-(id)_ICCIDString:(id)string;
-(id)_IMSStatusString:(id)string;
-(id)_MINString:(id)string;
-(id)_NAIString:(id)string;
-(id)_ERIString:(id)string;
-(id)_PRLString:(id)string;
-(id)_cellularRegistrationInfo;
-(BOOL)shouldShowSIMSpecifier;
-(BOOL)_isUsingBootstrap;
-(id)_getCTMobileEquipmentInfo:(CFStringRef)info;
-(id)_mobileEquipmentInfo;
-(id)_carrierVersion:(id)version;
-(id)_macAddress;
-(id)_macAddressSpecifierKey;
-(id)_bluetoothMACAddress;
-(id)valueForSpecifier:(id)specifier;
-(id)_myNumber;
-(void)_setValue:(id)value forSpecifier:(id)specifier;
-(void)_setValue:(id)value forSpecifierWithKey:(id)key;
-(void)_addKey:(id)key value:(id)value isCopyable:(BOOL)copyable;
-(void)_addKey:(id)key isCopyable:(BOOL)copyable;
@end

