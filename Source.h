/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 3, 2015 at 6:37:31 AM Central European Summer Time
* Operating System: Version 8.3 (Build 12F70)
* Image Source: /private/var/db/stash/_.2t7K5z/Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SourceDelegate;
#import <Cydia/Cydia-Structs.h>
@class Database, NSObject;

@interface Source : NSObject {

	unsigned era_;
	Database* database_;
	metaIndex* index_;
	CYString* depiction_;
	CYString* description_;
	CYString* label_;
	CYString* origin_;
	CYString* support_;
	CYString* uri_;
	CYString* distribution_;
	CYString* type_;
	CYString* base_;
	CYString* version_;
	MenesObjectHandle<NSString, 0> host_;
	MenesObjectHandle<NSString, 0> authority_;
	CYString* defaultIcon_;
	MenesObjectHandle<NSMutableDictionary, 0> record_;
	char trusted_;
	set<std::basic_string<char>, std::less<std::basic_string<char> >, std::allocator<std::basic_string<char> > >* fetches_;
	set<std::basic_string<char>, std::less<std::basic_string<char> >, std::allocator<std::basic_string<char> > >* files_;
	NSObject*<SourceDelegate> delegate_;

}
+(id)_attributeKeys;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)getField:(id)arg1 ;
-(void)setMetaIndex:(metaIndex*)arg1 inPool:(CYPool*)arg2 ;
-(void)_remove;
-(id)baseuri;
-(id)iconuri;
-(metaIndex*)metaIndex;
-(id)initWithMetaIndex:(metaIndex*)arg1 forDatabase:(id)arg2 inPool:(CYPool*)arg3 ;
-(id)depictionForPackage:(id)arg1 ;
-(id)supportForPackage:(id)arg1 ;
-(char)trusted;
-(id)rooturi;
-(id)distribution;
-(id)defaultIcon;
-(void)setFetch:(BOOL)arg1 forURI:(const char*)arg2 ;
-(void)resetFetch;
-(void)setDelegate:(id)arg1 ;
-(id)name;
-(id)key;
-(id)type;
-(id)origin;
-(id)label;
-(id)host;
-(id)shortDescription;
-(BOOL)remove;
-(id)version;
-(id)sections;
-(void)_removeSection:(id)arg1 ;
-(id)record;
-(BOOL)addSection:(id)arg1 ;
-(BOOL)removeSection:(id)arg1 ;
-(void)_addSection:(id)arg1 ;
-(id)iconURL;
-(int)compareByName:(id)arg1 ;
-(id)attributeKeys;
-(BOOL)fetch;
@end

