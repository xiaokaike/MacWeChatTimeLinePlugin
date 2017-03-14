//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinBuffer_t;

@interface FavSyncRequest : PBGeneratedMessage
{
    unsigned int hasSelector:1;
    unsigned int hasKeyBuf:1;
    unsigned int selector;
    SKBuiltinBuffer_t *keyBuf;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetKeyBuf:) SKBuiltinBuffer_t *keyBuf; // @synthesize keyBuf;
@property(readonly, nonatomic) BOOL hasKeyBuf; // @synthesize hasKeyBuf;
@property(nonatomic, setter=SetSelector:) unsigned int selector; // @synthesize selector;
@property(readonly, nonatomic) BOOL hasSelector; // @synthesize hasSelector;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

