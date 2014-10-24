//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKApplicationDelegate.h>

@class NSArray, NSString, TSADocumentRoot;

__attribute__((visibility("hidden")))
@interface TSABaseApplicationDelegate : TSKApplicationDelegate
{
    TSADocumentRoot *mDocumentRoot;
    id <TSADownloadDelegate> _downloadDelegate;
}

+ (void)resetSharedConfigurations;
+ (id)sharedDelegate;
@property(retain, nonatomic) id <TSADownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) TSADocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
- (id)existingNestedDocumentPathForPath:(id)arg1;
- (BOOL)URLIsValidForImportedHyperlink:(id)arg1;
- (BOOL)openURL:(id)arg1;
- (id)invalidURLSchemes;
- (float)maximumAspectRatioForPreviewImage;
- (float)mimimumAspectRatioForPreviewImage;
@property(readonly, nonatomic) NSArray *applicationTemplateVariants;
- (void)registerDefaults;
- (BOOL)isReadableDocumentType:(id)arg1;
@property(readonly, nonatomic) NSArray *importableDocumentTypes;
@property(readonly, nonatomic) NSArray *readableDocumentTypes;
@property(readonly, nonatomic) NSString *nativeSFFDocumentType;
@property(readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentExtension;
@property(readonly, nonatomic) NSString *templateSFFDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentType;
@property(readonly, nonatomic) NSString *nativeDocumentExtension;
@property(readonly, nonatomic) NSString *nativeDocumentType;
- (void)persistenceError:(id)arg1;
- (Class)documentRootClass;
- (id)init;

@end
