//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

__attribute__((visibility("hidden")))
@interface OITSUFormatReferenceObject : NSObject <NSCopying, NSMutableCopying>
{
    CDStruct_bfed0e84 mFormatStruct;
    BOOL mUseExpandedContents;
}

+ (id)defaultDurationFormat;
+ (id)defaultDateFormat;
@property(readonly, nonatomic) BOOL useExpandedContents; // @synthesize useExpandedContents=mUseExpandedContents;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)p_setFormatStruct:(CDStruct_bfed0e84)arg1;
@property(readonly, nonatomic) CDStruct_bfed0e84 formatStruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTSUFormatFormatStruct:(CDStruct_bfed0e84)arg1;
- (id)initWithTSUFormatFormatStruct:(CDStruct_bfed0e84)arg1 useExpandedContents:(BOOL)arg2;
- (id)init;

@end
