//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor;

@interface MMChatInspectToolbarButton : NSButton
{
    BOOL _selected;
    NSColor *_strokeColor;
}

@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

