//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "MMCDNDownloadMgrExt.h"

@class NSMutableArray, NSString, NSTextField, NSTextView;

@interface FavoritesDebugController : NSWindowController <MMCDNDownloadMgrExt>
{
    NSMutableArray *_testDownloadArr;
    NSMutableArray *_testDownloadIDArr;
    NSTextField *_testDownloadLabel;
    NSTextView *_testDownloadTextView;
}

@property(retain, nonatomic) NSTextView *testDownloadTextView; // @synthesize testDownloadTextView=_testDownloadTextView;
@property(retain, nonatomic) NSTextField *testDownloadLabel; // @synthesize testDownloadLabel=_testDownloadLabel;
@property(retain, nonatomic) NSMutableArray *testDownloadIDArr; // @synthesize testDownloadIDArr=_testDownloadIDArr;
@property(retain, nonatomic) NSMutableArray *testDownloadArr; // @synthesize testDownloadArr=_testDownloadArr;
- (void).cxx_destruct;
- (void)cdnDownloadMgrDidFailedDownloadWithFavItemData:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (void)cdnDownloadMgrDidFinishedDownloadWithFavItemData:(id)arg1 type:(int)arg2 filePath:(id)arg3 taskID:(id)arg4;
- (void)cdnDownloadMgrDidStartDownloadWithFavItemData:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (void)testDownloadAllFavFiles:(id)arg1;
- (void)clearThumbnailCache:(id)arg1;
- (void)openCacheFolder:(id)arg1;
- (void)reIndexAllSearchItems:(id)arg1;
- (void)openFavoritesFolder:(id)arg1;
- (void)autoScroll:(id)arg1;
- (void)refreshFavoritesView:(id)arg1;
- (void)sync:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

