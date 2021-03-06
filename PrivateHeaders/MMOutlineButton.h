//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSFont, NSString, NSTextField;

@interface MMOutlineButton : NSView
{
    BOOL _enabled;
    BOOL _highlighted;
    NSFont *_font;
    NSColor *_titleColor;
    double _titleAlpha;
    NSColor *_backgrounColor;
    double _cornerRaidus;
    double _borderWidth;
    NSColor *_borderColor;
    id _target;
    SEL _action;
    CDUnknownBlockType _didTriggeredActionBlock;
    NSTextField *_titleLabel;
    CDUnknownBlockType _didLeftMouseDownBlock;
    CDUnknownBlockType _didLeftMouseUpBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didLeftMouseUpBlock; // @synthesize didLeftMouseUpBlock=_didLeftMouseUpBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeftMouseDownBlock; // @synthesize didLeftMouseDownBlock=_didLeftMouseDownBlock;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType didTriggeredActionBlock; // @synthesize didTriggeredActionBlock=_didTriggeredActionBlock;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRaidus; // @synthesize cornerRaidus=_cornerRaidus;
@property(retain, nonatomic) NSColor *backgrounColor; // @synthesize backgrounColor=_backgrounColor;
@property(nonatomic) double titleAlpha; // @synthesize titleAlpha=_titleAlpha;
@property(retain, nonatomic) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
@property(retain, nonatomic) NSString *title;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

