/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LocationServicesListController.h"

@class RTRoutineManager;

__attribute__((visibility("hidden")))
@interface LocationSystemServicesListController : LocationServicesListController {
	RTRoutineManager* _routineManager;
}
@property(retain, nonatomic) RTRoutineManager* routineManager;
-(id)specifiers;
-(void)_performConsistencyCheck;
-(id)_areLocationBasedAlertsAuthorized;
-(void)_setLocationBasedAlertsAuthorized:(id)authorized;
-(void)_showAddressCorrectionPage;
-(void)_setAddressCorrectionAuthorizationStatus:(id)status specifier:(id)specifier;
-(id)_readAddressCorrectionAuthorizationStatus:(id)status;
-(id)_productImprovementByBundlePath;
-(id)_locationBasedAlertBundles;
-(id)coreRoutineEnabledStatus:(id)status;
-(void)setStatusEnabled:(id)enabled specifier:(id)specifier;
-(id)isStatusEnabled:(id)enabled;
-(void)stopLocationStatusUpdates;
-(void)startLocationStatusUpdates;
-(void)dealloc;
-(id)init;
@end

