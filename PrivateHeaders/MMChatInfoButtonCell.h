//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JNWCollectionViewCell.h"

@class NSButton, NSTextField;

@interface MMChatInfoButtonCell : JNWCollectionViewCell
{
    BOOL _enabled;
    unsigned long long _type;
    id _target;
    SEL _action;
    NSButton *_button;
    NSTextField *_titleField;
}

@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)buttonClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

