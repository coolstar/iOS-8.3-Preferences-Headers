/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol TKTonePickerViewControllerDelegate <NSObject>
@optional
-(void)tonePickerViewController:(id)controller didDismissVibrationPickerViewController:(id)controller2;
-(void)tonePickerViewController:(id)controller willPresentVibrationPickerViewController:(id)controller2;
-(void)tonePickerViewController:(id)controller selectedMediaItemWithIdentifier:(id)identifier;
-(void)tonePickerViewController:(id)controller selectedToneWithIdentifier:(id)identifier;
@end

