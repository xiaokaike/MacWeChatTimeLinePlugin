//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class AutoAuthAesReqData, AutoAuthRsaReqData;

@interface AutoAuthRequest : PBGeneratedMessage
{
    unsigned int hasRsaReqData:1;
    unsigned int hasAesReqData:1;
    AutoAuthRsaReqData *rsaReqData;
    AutoAuthAesReqData *aesReqData;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetAesReqData:) AutoAuthAesReqData *aesReqData; // @synthesize aesReqData;
@property(readonly, nonatomic) BOOL hasAesReqData; // @synthesize hasAesReqData;
@property(retain, nonatomic, setter=SetRsaReqData:) AutoAuthRsaReqData *rsaReqData; // @synthesize rsaReqData;
@property(readonly, nonatomic) BOOL hasRsaReqData; // @synthesize hasRsaReqData;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

