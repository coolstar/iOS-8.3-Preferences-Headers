/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ACAccountStore, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PrivacyController : XXUnknownSuperclass {
	PSSpecifier* _locationSpecifier;
	ACAccountStore* _accountStore;
}
+(void)formatSearchEntries:(id)entries parent:(id)parent;
-(void)dealloc;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)locationServicesEnabled:(id)enabled;
-(void)updateLocationServicesVisibility;
-(id)capabilityEnabled:(id)enabled;
-(void)setCapabilityEnabled:(id)enabled specifier:(id)specifier;
-(BOOL)hasSocialSpecifiers:(id)specifiers;
-(id)specifiers;
-(id)_accountStore;
@end

