/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LocationServicesListController.h"

@class RTRoutineManager, PSSpecifier;

__attribute__((visibility("hidden")))
@interface LocationCoreRoutineListController : LocationServicesListController {
	PSSpecifier* _coreRoutineSpecifier;
	id _coreRoutineSettings;
	id _cachedParentController;
	RTRoutineManager* _routineManager;
}
@property(retain, nonatomic) RTRoutineManager* routineManager;
@property(retain) id cachedParentController;
-(id)specifiers;
-(void)setStatusEnabled:(id)enabled specifier:(id)specifier;
-(id)isStatusEnabled:(id)enabled;
-(void)setCoreRoutineEnabled:(id)enabled specifier:(id)specifier;
-(id)isCoreRoutineEnabled:(id)enabled;
-(void)updateSpecifiersForImposedSettings;
-(void)stopLocationStatusUpdates;
-(void)startLocationStatusUpdates;
-(void)updateLocationUsage;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(id)init;
@end

