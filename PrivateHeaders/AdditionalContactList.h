//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class LinkedinContactItem;

@interface AdditionalContactList : PBGeneratedMessage
{
    unsigned int hasLinkedinContactItem:1;
    LinkedinContactItem *linkedinContactItem;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetLinkedinContactItem:) LinkedinContactItem *linkedinContactItem; // @synthesize linkedinContactItem;
@property(readonly, nonatomic) BOOL hasLinkedinContactItem; // @synthesize hasLinkedinContactItem;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

