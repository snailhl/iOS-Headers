//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, GEOPlaceSearchRequest, NSMutableArray;

@interface GEOWaypoint : PBCodable <NSCopying>
{
    NSMutableArray *_entryPoints;
    GEOLocation *_location;
    GEOPlaceSearchRequest *_placeSearchRequest;
}

@property(retain, nonatomic) NSMutableArray *entryPoints; // @synthesize entryPoints=_entryPoints;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest; // @synthesize placeSearchRequest=_placeSearchRequest;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)entryPointAtIndex:(unsigned int)arg1;
- (unsigned int)entryPointsCount;
- (void)addEntryPoint:(id)arg1;
- (void)clearEntryPoints;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasPlaceSearchRequest;
- (void)dealloc;
- (id)locationForWaypoint;
- (id)initWithLocation:(id)arg1;

@end
