//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface ShowStyleKey : PBGeneratedMessage
{
    unsigned int hasKeyCount:1;
    unsigned int keyCount;
    NSMutableArray *mutableKeyList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableKeyList; // @synthesize mutableKeyList;
@property(nonatomic, setter=SetKeyCount:) unsigned int keyCount; // @synthesize keyCount;
@property(readonly, nonatomic) BOOL hasKeyCount; // @synthesize hasKeyCount;
- (void).cxx_destruct;
- (void)addKey:(id)arg1;
- (void)addKeyFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *key; // @dynamic key;
- (id)keyList;
- (id)init;

@end

