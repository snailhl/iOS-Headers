//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOTileKeyList, GEOTileLoader, NSString;

@protocol GEOTileLoaderInternalDelegate <NSObject>
- (void)tileLoader:(GEOTileLoader *)arg1 submittedTilesToNetwork:(GEOTileKeyList *)arg2 forClient:(NSString *)arg3;
@end

