//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMChatBackupRecord : NSObject
{
    NSString *_deviceId;
    NSString *_recordName;
    NSString *_creatTime;
    NSString *_lastModifyTime;
}

@property(retain, nonatomic) NSString *lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(retain, nonatomic) NSString *creatTime; // @synthesize creatTime=_creatTime;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)init;

@end
