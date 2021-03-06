//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import "TSDMixing.h"

__attribute__((visibility("hidden")))
@interface TSDShapeStyle : TSSStyle <TSDMixing>
{
}

+ (id)p_magicMoveProperties;
+ (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
+ (id)propertiesAllowingNSNull;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)properties;
+ (void)initialize;
+ (void)saveShapeStylePropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive *)arg2 archiver:(id)arg3;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (BOOL)wantsHighContrastBackgroundColor;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (void)saveToArchive:(struct ShapeStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShapeStyleArchive *)arg1 unarchiver:(id)arg2;
- (const struct ShapeStyleArchive *)shapeStyleArchiveFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize)arg1;

@end

