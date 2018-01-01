/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 3, 2015 at 6:37:31 AM Central European Summer Time
* Operating System: Version 8.3 (Build 12F70)
* Image Source: /private/var/db/stash/_.2t7K5z/Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Cydia/Cydia-Structs.h>
@interface CydiaProgressEvent : NSObject {

	MenesObjectHandle<NSString, 0> message_;
	MenesObjectHandle<NSString, 0> type_;
	MenesObjectHandle<NSArray, 0> item_;
	MenesObjectHandle<NSString, 0> package_;
	MenesObjectHandle<NSString, 0> url_;
	MenesObjectHandle<NSString, 0> version_;

}
+(id)_attributeKeys;
+(id)eventWithMessage:(id)arg1 ofType:(id)arg2 ;
+(id)eventWithMessage:(id)arg1 ofType:(id)arg2 forPackage:(id)arg3 ;
+(id)eventWithMessage:(id)arg1 ofType:(id)arg2 forItemDesc:(ItemDesc*)arg3 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)initWithMessage:(id)arg1 ofType:(id)arg2 ;
-(id)compound:(id)arg1 ;
-(id)compoundMessage;
-(id)compoundTitle;
-(id)item;
-(id)url;
-(id)type;
-(id)message;
-(void)setItem:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(id)package;
-(void)setPackage:(id)arg1 ;
-(id)attributeKeys;
@end

