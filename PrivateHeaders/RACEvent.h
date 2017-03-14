//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSError;

@interface RACEvent : NSObject <NSCopying>
{
    unsigned long long _eventType;
    id _object;
}

+ (id)eventWithValue:(id)arg1;
+ (id)eventWithError:(id)arg1;
+ (id)completedEvent;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEventType:(unsigned long long)arg1 object:(id)arg2;
@property(readonly, nonatomic) id value;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;

@end

