//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface MMCmdWrap : NSObject
{
    int _m_requestCmdId;
    int _m_channelType;
    int _m_sequence;
    NSData *_m_requestData;
}

+ (unsigned long long)GetTickCount;
@property int m_sequence; // @synthesize m_sequence=_m_sequence;
@property int m_channelType; // @synthesize m_channelType=_m_channelType;
@property(retain) NSData *m_requestData; // @synthesize m_requestData=_m_requestData;
@property int m_requestCmdId; // @synthesize m_requestCmdId=_m_requestCmdId;
- (void).cxx_destruct;

@end

