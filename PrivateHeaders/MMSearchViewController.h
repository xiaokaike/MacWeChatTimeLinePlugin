//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "MMSearchTableSectionHeaderViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MMBaseSearchLogic, MMNoMenuTableView, MMSearchViewNoResult, MMTimer, NSArray, NSString, NSView, NSVisualEffectView, RBLPopover;

@interface MMSearchViewController : MMViewController <NSTableViewDataSource, NSTableViewDelegate, MMSearchTableSectionHeaderViewDelegate>
{
    BOOL _choseResult;
    BOOL _isSearchFieldClean;
    unsigned long long _style;
    RBLPopover *_popover;
    NSVisualEffectView *_effectView;
    NSView *_stageView;
    NSString *_keyword;
    MMTimer *_timer;
    unsigned long long _lastCalledTime;
    NSString *_selectedID;
    NSArray *_showingSearchResults;
    MMBaseSearchLogic *_searchLogic;
    unsigned long long _searchScene;
    MMNoMenuTableView *_tableView;
    MMSearchViewNoResult *_noResultView;
    id _mouseEvent;
    CDUnknownBlockType _mouseDidClickOutsideBlock;
    CDUnknownBlockType _didChooseContactBlock;
    CDUnknownBlockType _didChooseFavResultBlock;
    CDUnknownBlockType _didChooseViewItemInFavTabBlock;
    CDUnknownBlockType _didCancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didCancelBlock; // @synthesize didCancelBlock=_didCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didChooseViewItemInFavTabBlock; // @synthesize didChooseViewItemInFavTabBlock=_didChooseViewItemInFavTabBlock;
@property(copy, nonatomic) CDUnknownBlockType didChooseFavResultBlock; // @synthesize didChooseFavResultBlock=_didChooseFavResultBlock;
@property(copy, nonatomic) CDUnknownBlockType didChooseContactBlock; // @synthesize didChooseContactBlock=_didChooseContactBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseDidClickOutsideBlock; // @synthesize mouseDidClickOutsideBlock=_mouseDidClickOutsideBlock;
@property(retain, nonatomic) id mouseEvent; // @synthesize mouseEvent=_mouseEvent;
@property(nonatomic) __weak MMSearchViewNoResult *noResultView; // @synthesize noResultView=_noResultView;
@property(nonatomic) __weak MMNoMenuTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) MMBaseSearchLogic *searchLogic; // @synthesize searchLogic=_searchLogic;
@property(retain, nonatomic) NSArray *showingSearchResults; // @synthesize showingSearchResults=_showingSearchResults;
@property(retain, nonatomic) NSString *selectedID; // @synthesize selectedID=_selectedID;
@property(nonatomic) unsigned long long lastCalledTime; // @synthesize lastCalledTime=_lastCalledTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) __weak NSView *stageView; // @synthesize stageView=_stageView;
@property(retain, nonatomic) NSVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) RBLPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)mmSearchTableSectionHeaderViewDidClicked:(id)arg1;
- (void)chooseItem:(id)arg1;
- (void)singleClickOnTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)_updateTableviewSelectionDisplay;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)handleSpecialSearchCommandWithResult:(id)arg1;
- (id)specialCommandResWithKeyword:(id)arg1;
- (void)selectAndScrollToRow:(long long)arg1;
- (void)selectPreviousItem;
- (void)selectNextItem;
- (void)selectFirstItem;
- (void)chooseCurrentItem;
- (void)showWithResults:(id)arg1 inView:(id)arg2 isReloadData:(BOOL)arg3;
- (void)doSearch;
- (void)hide;
- (void)searchWithKeyword:(id)arg1 andShowInView:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

