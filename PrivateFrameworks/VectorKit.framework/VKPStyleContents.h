/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray, VKPStyleProperties;

@interface VKPStyleContents : PBCodable <NSCopying> {
    VKPStyleProperties *_properties;
    NSMutableArray *_zooms;
}

@property(readonly) bool hasProperties;
@property(retain) VKPStyleProperties * properties;
@property(retain) NSMutableArray * zooms;


- (id)zooms;
- (bool)hasProperties;
- (id)zoomsAtIndex:(unsigned long long)arg1;
- (void)clearZooms;
- (unsigned long long)zoomsCount;
- (void)addZooms:(id)arg1;
- (void)setZooms:(id)arg1;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)properties;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end