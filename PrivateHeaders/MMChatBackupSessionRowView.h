//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class MMAvatarImageView, NSButton, NSTextField, WCContactData;

@interface MMChatBackupSessionRowView : NSTableRowView
{
    BOOL _highlighted;
    id _target;
    SEL _action;
    id _context;
    unsigned long long _totalSize;
    NSButton *_checkbox;
    MMAvatarImageView *_avatarView;
    NSTextField *_sessionNameField;
    NSTextField *_sessionSizeField;
    WCContactData *_contact;
}

@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSTextField *sessionSizeField; // @synthesize sessionSizeField=_sessionSizeField;
@property(retain, nonatomic) NSTextField *sessionNameField; // @synthesize sessionNameField=_sessionNameField;
@property(retain, nonatomic) MMAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSButton *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)setupWithContact:(id)arg1;
- (void)_callDelegate;
- (void)checkboxChecked:(id)arg1;
@property(nonatomic) BOOL chosen;
- (id)currentBgColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

