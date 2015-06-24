/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TKVibrationPickerViewControllerDelegate.h"
#import "TKTonePickerViewControllerDelegate.h"

@class NSString, TKTonePickerViewController;

__attribute__((visibility("hidden")))
@interface ToneController : XXUnknownSuperclass <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {
	TKTonePickerViewController* _tonePickerViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) TKTonePickerViewController* tonePickerViewController;
-(void)vibrationPickerViewController:(id)controller selectedVibrationWithIdentifier:(id)identifier;
-(void)tonePickerViewController:(id)controller didDismissVibrationPickerViewController:(id)controller2;
-(void)tonePickerViewController:(id)controller willPresentVibrationPickerViewController:(id)controller2;
-(void)tonePickerViewController:(id)controller selectedToneWithIdentifier:(id)identifier;
-(void)_updateReloadSpecifierInParentController;
-(void)_insertTonePickerView;
-(void)viewDidLoad;
-(void)setSpecifier:(id)specifier;
-(void)dealloc;
@end

