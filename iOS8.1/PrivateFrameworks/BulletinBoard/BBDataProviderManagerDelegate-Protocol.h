//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBDataProvider, BBDataProviderManager, BBParentSectionDataProviderFactory, BBSectionInfo, NSString;

@protocol BBDataProviderManagerDelegate <NSObject>
- (BBSectionInfo *)dpManager:(BBDataProviderManager *)arg1 sectionInfoForSectionID:(NSString *)arg2;
- (void)dpManager:(BBDataProviderManager *)arg1 removeDataProviderSectionID:(NSString *)arg2;
- (void)dpManager:(BBDataProviderManager *)arg1 addParentSectionFactory:(BBParentSectionDataProviderFactory *)arg2;
- (void)dpManager:(BBDataProviderManager *)arg1 addDataProvider:(BBDataProvider *)arg2 withSectionInfo:(BBSectionInfo *)arg3;
@end
