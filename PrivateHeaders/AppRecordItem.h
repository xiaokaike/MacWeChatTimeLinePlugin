//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface AppRecordItem : NSObject
{
    unsigned int _m_uiFromScene;
    NSString *_m_nsRecordTitle;
    NSString *_m_nsRecordDesc;
    NSString *_m_nsRecordInfo;
    NSMutableArray *_m_arrRecordData;
    NSString *_m_nsFavUsername;
}

+ (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1 dataField:(id)arg2;
+ (id)GetRecordDataDir:(id)arg1 LocalID:(unsigned int)arg2;
+ (id)GetRecordDataPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3 DataExt:(id)arg4;
+ (id)GetRecordDataTempPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3;
+ (id)GetRecordThumbPathByUsername:(id)arg1 LocalID:(unsigned int)arg2 DataID:(id)arg3;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (id)xmlOfStreamVideo:(id)arg1;
+ (id)RecordItemToXML:(id)arg1;
+ (BOOL)ParserRecordXML:(id)arg1 TORecordItem:(id)arg2 msg:(id)arg3;
@property(retain, nonatomic) NSString *m_nsFavUsername; // @synthesize m_nsFavUsername=_m_nsFavUsername;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(retain, nonatomic) NSMutableArray *m_arrRecordData; // @synthesize m_arrRecordData=_m_arrRecordData;
@property(retain, nonatomic) NSString *m_nsRecordInfo; // @synthesize m_nsRecordInfo=_m_nsRecordInfo;
@property(retain, nonatomic) NSString *m_nsRecordDesc; // @synthesize m_nsRecordDesc=_m_nsRecordDesc;
@property(retain, nonatomic) NSString *m_nsRecordTitle; // @synthesize m_nsRecordTitle=_m_nsRecordTitle;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

