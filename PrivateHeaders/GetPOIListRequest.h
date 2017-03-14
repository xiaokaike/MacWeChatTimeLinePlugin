//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetPOIListRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasScene:1;
    unsigned int hasOpCode:1;
    unsigned int hasKeyword:1;
    unsigned int hasBuff:1;
    unsigned int hasLongitude:1;
    unsigned int hasLatitude:1;
    unsigned int scene;
    unsigned int opCode;
    BaseRequest *baseRequest;
    NSString *keyword;
    SKBuiltinBuffer_t *buff;
    double longitude;
    double latitude;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetLatitude:) double latitude; // @synthesize latitude;
@property(readonly, nonatomic) BOOL hasLatitude; // @synthesize hasLatitude;
@property(nonatomic, setter=SetLongitude:) double longitude; // @synthesize longitude;
@property(readonly, nonatomic) BOOL hasLongitude; // @synthesize hasLongitude;
@property(retain, nonatomic, setter=SetBuff:) SKBuiltinBuffer_t *buff; // @synthesize buff;
@property(readonly, nonatomic) BOOL hasBuff; // @synthesize hasBuff;
@property(retain, nonatomic, setter=SetKeyword:) NSString *keyword; // @synthesize keyword;
@property(readonly, nonatomic) BOOL hasKeyword; // @synthesize hasKeyword;
@property(nonatomic, setter=SetOpCode:) unsigned int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

