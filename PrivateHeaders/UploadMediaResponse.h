//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface UploadMediaResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasMediaId:1;
    unsigned int hasStartPos:1;
    unsigned int startPos;
    BaseResponse *baseResponse;
    NSString *mediaId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetStartPos:) unsigned int startPos; // @synthesize startPos;
@property(readonly, nonatomic) BOOL hasStartPos; // @synthesize hasStartPos;
@property(retain, nonatomic, setter=SetMediaId:) NSString *mediaId; // @synthesize mediaId;
@property(readonly, nonatomic) BOOL hasMediaId; // @synthesize hasMediaId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

