//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinString_t;

@interface MicroMsgResponseNew : PBGeneratedMessage
{
    unsigned int hasRet:1;
    unsigned int hasToUserName:1;
    unsigned int hasMsgId:1;
    unsigned int hasClientMsgId:1;
    unsigned int hasCreateTime:1;
    unsigned int hasServerTime:1;
    unsigned int hasType:1;
    unsigned int hasNewMsgId:1;
    int ret;
    unsigned int msgId;
    unsigned int clientMsgId;
    unsigned int createTime;
    unsigned int serverTime;
    unsigned int type;
    SKBuiltinString_t *toUserName;
    unsigned long long newMsgId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetNewMsgId:) unsigned long long newMsgId; // @synthesize newMsgId;
@property(readonly, nonatomic) BOOL hasNewMsgId; // @synthesize hasNewMsgId;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(nonatomic, setter=SetServerTime:) unsigned int serverTime; // @synthesize serverTime;
@property(readonly, nonatomic) BOOL hasServerTime; // @synthesize hasServerTime;
@property(nonatomic, setter=SetCreateTime:) unsigned int createTime; // @synthesize createTime;
@property(readonly, nonatomic) BOOL hasCreateTime; // @synthesize hasCreateTime;
@property(nonatomic, setter=SetClientMsgId:) unsigned int clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
@property(nonatomic, setter=SetMsgId:) unsigned int msgId; // @synthesize msgId;
@property(readonly, nonatomic) BOOL hasMsgId; // @synthesize hasMsgId;
@property(retain, nonatomic, setter=SetToUserName:) SKBuiltinString_t *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(nonatomic, setter=SetRet:) int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

