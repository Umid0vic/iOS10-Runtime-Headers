/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSSet, VKMapModel, NSMutableSet, VKStyleManager;

@interface VKMapTileModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {
    NSMutableSet *_tilesWillEnterScene;
    NSMutableSet *_tilesInScene;
    NSMutableSet *_tilesInScenePlusExitingTiles;
    NSMutableSet *_tilesWillExitScene;
    NSMutableSet *_tilesExitingScene;
    NSMutableSet *_previousTilesInScene;
    VKMapModel *_mapModel;
    unsigned char _minimumZ;
    unsigned char _maximumZ;
}

@property VKMapModel * mapModel;
@property(readonly) NSSet * tilesInScene;
@property(readonly) NSSet * tilesInScenePlusExitingTiles;
@property(readonly) unsigned char minimumZ;
@property(readonly) unsigned char maximumZ;
@property(readonly) VKStyleManager * styleManager;

+ (bool)reloadOnActiveTileGroupChange;
+ (bool)reloadOnStylesheetChange;

- (unsigned char)maximumZ;
- (unsigned char)minimumZ;
- (id)tilesInScenePlusExitingTiles;
- (id)tilesInScene;
- (void)willStopDrawingTiles:(id)arg1;
- (void)willStartDrawingTiles:(id)arg1;
- (void)removePersistingExitingTiles:(id)arg1;
- (void)createCollectionsIfNecessary;
- (void)clearCollections;
- (void)createCollections;
- (id)mapModel;
- (void)updateTilesInScene:(id)arg1 withContext:(id)arg2 categorize:(bool)arg3;
- (unsigned long long)mapLayerPosition;
- (bool)maximumZoomLevelBoundsCamera;
- (bool)minimumZoomLevelBoundsCamera;
- (void)activeTileGroupChanged;
- (void)stylesheetDidChange;
- (void)stylesheetWillChange;
- (void)didMoveToSupermodel;
- (void)setMapModel:(id)arg1;
- (id)styleManager;
- (id)init;
- (void)dealloc;
- (void)reset;

@end