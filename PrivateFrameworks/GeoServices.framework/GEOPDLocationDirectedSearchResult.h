/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion;

@interface GEOPDLocationDirectedSearchResult : PBCodable <NSCopying> {
    GEOMapRegion *_displayMapRegion;
}

@property(readonly) bool hasDisplayMapRegion;
@property(retain) GEOMapRegion * displayMapRegion;


- (id)displayMapRegion;
- (bool)hasDisplayMapRegion;
- (void)setDisplayMapRegion:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end