/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Preferences-Structs.h"
#import "UISearchBarDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UISearchBar, NSArray, UITableView;

__attribute__((visibility("hidden")))
@interface TimeZonePane : XXUnknownSuperclass <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource> {
	UITableView* _completionTable;
	NSArray* _cities;
	UISearchBar* _searchBar;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UISearchBar* searchBar;
+(void)setTimeZone:(id)zone;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)setPreferenceSpecifier:(id)specifier;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)textValueChanged:(id)changed;
-(void)layoutSubviews;
-(void)updateTableInsets;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

