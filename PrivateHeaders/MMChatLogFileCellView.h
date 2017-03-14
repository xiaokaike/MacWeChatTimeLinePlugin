//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

@class MMCircularProgressView, MMImageView, NSString, NSTextField, NSView;

@interface MMChatLogFileCellView : MMChatLogBaseCellView
{
    BOOL _isShouldOpenOnDownloadFinish;
    MMImageView *_thumbnailImageView;
    NSTextField *_fileDescriptionTextView;
    NSTextField *_fileSizeTextView;
    MMCircularProgressView *_progressView;
    NSString *_filePath;
    NSView *_progressContainerView;
}

+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 constrainedToWidth:(double)arg4;
@property(retain, nonatomic) NSView *progressContainerView; // @synthesize progressContainerView=_progressContainerView;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) BOOL isShouldOpenOnDownloadFinish; // @synthesize isShouldOpenOnDownloadFinish=_isShouldOpenOnDownloadFinish;
@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSTextField *fileSizeTextView; // @synthesize fileSizeTextView=_fileSizeTextView;
@property(retain, nonatomic) NSTextField *fileDescriptionTextView; // @synthesize fileDescriptionTextView=_fileDescriptionTextView;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (void)openFile;
- (void)layoutFileContentView;
- (void)layoutFileSizeTextView;
- (void)layoutFileDescriptionTextView;
- (void)layoutThumbnailImage;
- (id)getFileIconImage;
- (unsigned int)getFileBytes;
- (id)getFileSize;
- (id)getTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

