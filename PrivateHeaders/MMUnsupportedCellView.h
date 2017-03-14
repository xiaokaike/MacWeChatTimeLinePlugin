//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTextMessageCellView.h"

@class MessageData, NSButton;

@interface MMUnsupportedCellView : MMTextMessageCellView
{
    MessageData *_originalMessage;
    NSButton *_contextMenuButton;
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)makeUnsupportedTableItemWithItem:(id)arg1;
@property(retain, nonatomic) NSButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) MessageData *originalMessage; // @synthesize originalMessage=_originalMessage;
- (void).cxx_destruct;
- (BOOL)makeMakeMultipleSelectUnavailable;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (struct CGRect)rectForContextMenuButton;
- (void)_contextMenuShowSourceDebugTool;
- (void)populateWithMessage:(id)arg1;

@end

