//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t;

@interface ShakeSyncResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasBuffer:1;
    unsigned int hasRet:1;
    unsigned int hasImgId:1;
    unsigned int hasImgTotoalLen:1;
    unsigned int ret;
    unsigned int imgId;
    unsigned int imgTotoalLen;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *buffer;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetImgTotoalLen:) unsigned int imgTotoalLen; // @synthesize imgTotoalLen;
@property(readonly, nonatomic) BOOL hasImgTotoalLen; // @synthesize hasImgTotoalLen;
@property(nonatomic, setter=SetImgId:) unsigned int imgId; // @synthesize imgId;
@property(readonly, nonatomic) BOOL hasImgId; // @synthesize hasImgId;
@property(nonatomic, setter=SetRet:) unsigned int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
@property(retain, nonatomic, setter=SetBuffer:) SKBuiltinBuffer_t *buffer; // @synthesize buffer;
@property(readonly, nonatomic) BOOL hasBuffer; // @synthesize hasBuffer;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

