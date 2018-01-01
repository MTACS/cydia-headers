/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 3, 2015 at 6:37:31 AM Central European Summer Time
* Operating System: Version 8.3 (Build 12F70)
* Image Source: /private/var/db/stash/_.2t7K5z/Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class Database;

@interface SectionsController : CyteViewController <UITableViewDataSource, UITableViewDelegate> {

	Database* database_;
	MenesObjectHandle<NSString, 0> key_;
	MenesObjectHandle<NSMutableArray, 0> sections_;
	MenesObjectHandle<NSMutableArray, 0> filtered_;
	MenesObjectHandle<UITableView, 2> list_;

}
-(void)releaseSubviews;
-(id)navigationURL;
-(void)editButtonClicked;
-(id)sectionAtIndexPath:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 source:(id)arg2 ;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)source;
-(void)updateNavigationItem;
@end

