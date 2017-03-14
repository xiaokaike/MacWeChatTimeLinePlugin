//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface PacketBackupDataTag : PBGeneratedMessage
{
    unsigned int hasBakChatName:1;
    unsigned int hasStartTime:1;
    unsigned int hasEndTime:1;
    unsigned int hasMsgDataId:1;
    unsigned int hasNickName:1;
    NSString *bakChatName;
    long long startTime;
    long long endTime;
    NSString *msgDataId;
    NSString *nickName;
    NSMutableArray *mutableMediaIdlistList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableMediaIdlistList; // @synthesize mutableMediaIdlistList;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetMsgDataId:) NSString *msgDataId; // @synthesize msgDataId;
@property(readonly, nonatomic) BOOL hasMsgDataId; // @synthesize hasMsgDataId;
@property(nonatomic, setter=SetEndTime:) long long endTime; // @synthesize endTime;
@property(readonly, nonatomic) BOOL hasEndTime; // @synthesize hasEndTime;
@property(nonatomic, setter=SetStartTime:) long long startTime; // @synthesize startTime;
@property(readonly, nonatomic) BOOL hasStartTime; // @synthesize hasStartTime;
@property(retain, nonatomic, setter=SetBakChatName:) NSString *bakChatName; // @synthesize bakChatName;
@property(readonly, nonatomic) BOOL hasBakChatName; // @synthesize hasBakChatName;
- (void).cxx_destruct;
- (void)addMediaIdlistFromArray:(id)arg1;
- (void)addMediaIdlist:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *mediaIdlist; // @dynamic mediaIdlist;
- (id)mediaIdlistList;
- (id)init;

@end

