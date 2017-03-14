//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface WCFavoriteSessionTableData : NSObject <WCDBCoding>
{
    unsigned int lastUpdateTime;
    unsigned int msgCount;
    NSString *usrName;
    long long m___rowID;
}

+ (void)_initPBTableOfWCFavoriteSessionTableData;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned int msgCount; // @synthesize msgCount;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName;
- (void).cxx_destruct;
- (const basic_string_805fe43b *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_8b94cd3d *)db_msgCount;
- (const WCDBCondition_8b94cd3d *)db_lastUpdateTime;
- (const WCDBCondition_0fe98630 *)db_usrName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

