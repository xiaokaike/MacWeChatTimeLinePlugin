//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMFavoritesListBaseCell.h"

#import "MMFavoriteFileServiceExt.h"
#import "MMFavoriteImageServiceExt.h"

@class MMCircularProgressView, MMImageView, NSString, NSTextField, NSView;

@interface MMFavoritesListMediaCell : MMFavoritesListBaseCell <MMFavoriteImageServiceExt, MMFavoriteFileServiceExt>
{
    MMImageView *_thumbnailImageView;
    NSTextField *_titleTextView;
    NSTextField *_descTextView;
    NSTextField *_sourceTextView;
    MMCircularProgressView *_progressView;
    NSView *_progressContainerView;
}

@property(retain, nonatomic) NSView *progressContainerView; // @synthesize progressContainerView=_progressContainerView;
@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSTextField *sourceTextView; // @synthesize sourceTextView=_sourceTextView;
@property(retain, nonatomic) NSTextField *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) NSTextField *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (void)favoriteFileService:(id)arg1 didFailDownloadWithFavItemData:(id)arg2 type:(int)arg3 taskID:(id)arg4;
- (void)favoriteFileService:(id)arg1 didFinishDownloadWithFavItemData:(id)arg2 type:(int)arg3 filePath:(id)arg4 taskID:(id)arg5;
- (void)favoriteFileService:(id)arg1 downloaded:(int)arg2 of:(int)arg3 WithFavItemData:(id)arg4 type:(int)arg5;
- (void)MMFavoriteImageServiceDidDownloadImage:(id)arg1 withLocalID:(unsigned int)arg2;
- (id)getFileIconImage;
- (id)getRecommendTagSource;
- (id)getRecommendTagTitle;
- (id)getRecommendTagAuthor;
- (id)getContent;
- (unsigned int)getFileBytes;
- (id)getSource;
- (id)getTitle;
- (void)layoutProgressView;
- (void)layoutSourceTextView;
- (void)layoutDescriptionTextView;
- (void)layoutTitleTextView;
- (void)layoutThumbnailImage;
- (void)layoutFavContentView;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

