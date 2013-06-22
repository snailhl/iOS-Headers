/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPhotoshopAsset : TDAsset
{
}

- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (BOOL)hasProduction;
- (id)production;
- (BOOL)hasCursorProduction;
- (id)_productionWithRenditionsInProductions:(id)arg1;
- (id)_activeProductionWithRenditionsInProductions:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *productions; // @dynamic productions;

@end
