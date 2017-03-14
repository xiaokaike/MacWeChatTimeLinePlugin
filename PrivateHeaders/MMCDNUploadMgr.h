//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface MMCDNUploadMgr : MMService <ICdnComMgrExt, MMService>
{
    NSMutableDictionary *_uploadingMsgs;
}

@property(retain, nonatomic) NSMutableDictionary *uploadingMsgs; // @synthesize uploadingMsgs=_uploadingMsgs;
- (void).cxx_destruct;
- (void)cancelUploadWithMessage:(id)arg1 type:(int)arg2;
- (void)uploadCDNFileWithMessage:(id)arg1 type:(int)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

