//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "IContactMgrExt.h"
#import "NSMenuDelegate.h"

@class MMAvatarImageView, MMBadgeOverlayView, MMImageView, MMSessionInfo, MMSidebarColorIconView, MMSidebarLabelTextField, MMTextView, MMView, NSString, NSView;

@interface MMChatsTableCellView : NSTableCellView <IContactMgrExt, NSMenuDelegate>
{
    BOOL _selected;
    BOOL _isSticky;
    BOOL _shouldRemoveHighlight;
    BOOL _isMuted;
    BOOL _shouldDrawFocusRing;
    id <MMChatsTableCellViewDelegate> _delegate;
    MMSessionInfo *_sessionInfo;
    MMView *_vibrancyContainer;
    MMAvatarImageView *_avatar;
    MMBadgeOverlayView *_badgeView;
    MMSidebarLabelTextField *_summary;
    MMSidebarLabelTextField *_timeLabel;
    MMTextView *_nickName;
    NSView *_containerView;
    NSString *_messageTime;
    MMView *_stickyBackgroundView;
    MMView *_seperator;
    MMSidebarColorIconView *_muteIndicator;
    MMSidebarColorIconView *_stickyIndicator;
    MMImageView *_sendFailedImg;
}

@property(retain, nonatomic) MMImageView *sendFailedImg; // @synthesize sendFailedImg=_sendFailedImg;
@property(nonatomic) BOOL shouldDrawFocusRing; // @synthesize shouldDrawFocusRing=_shouldDrawFocusRing;
@property(nonatomic) BOOL isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) MMSidebarColorIconView *stickyIndicator; // @synthesize stickyIndicator=_stickyIndicator;
@property(retain, nonatomic) MMSidebarColorIconView *muteIndicator; // @synthesize muteIndicator=_muteIndicator;
@property(retain, nonatomic) MMView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) MMView *stickyBackgroundView; // @synthesize stickyBackgroundView=_stickyBackgroundView;
@property(retain, nonatomic) NSString *messageTime; // @synthesize messageTime=_messageTime;
@property(nonatomic) BOOL shouldRemoveHighlight; // @synthesize shouldRemoveHighlight=_shouldRemoveHighlight;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) BOOL isSticky; // @synthesize isSticky=_isSticky;
@property(retain, nonatomic) MMTextView *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) MMSidebarLabelTextField *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMSidebarLabelTextField *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) MMBadgeOverlayView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) MMAvatarImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) MMView *vibrancyContainer; // @synthesize vibrancyContainer=_vibrancyContainer;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) MMSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) __weak id <MMChatsTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)autoChangeSummaryBottom;
- (double)changeLineHight;
- (void)onModifyContacts:(id)arg1;
- (void)contextMenuLeaveGroupChat;
- (void)contextMenuRename;
- (void)contextMenuMute;
- (void)contextMenuSticky;
- (void)contextMenuDelete;
- (void)contextMenuProfile;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)canBecomeKeyView;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (id)acceptableDragTypes;
- (BOOL)hasDraft;
- (BOOL)isMentionedUnread;
- (id)summaryAttributedString;
- (id)nicknameAttributedStringWithString:(id)arg1;
- (BOOL)shouldDisplaySpecialMessagePlaceholder;
- (id)lastMessage;
- (id)formattedLastMessageTime;
@property(readonly, nonatomic) NSString *userName;
- (BOOL)hasUnreadMessage;
- (BOOL)shouldUseSelectedColorForText;
- (void)updateSelectionBackground;
- (void)_stopListeningForWindowChanges;
- (void)_startListeningForWindowChanges;
- (void)updateNicknameTextView;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

