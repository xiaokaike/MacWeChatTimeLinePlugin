//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface Mobile : PBGeneratedMessage
{
    unsigned int hasV:1;
    NSString *v;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetV:) NSString *v; // @synthesize v;
@property(readonly, nonatomic) BOOL hasV; // @synthesize hasV;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

