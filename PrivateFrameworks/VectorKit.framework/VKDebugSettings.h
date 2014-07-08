/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKDebugSettings : NSObject  {
    bool_paintMapTiles;
    bool_paintRoadBoundaries;
    bool_paintRoadTiles;
    bool_paintPointTiles;
    bool_paintPolygonTiles;
    bool_paintVertices;
    bool_paintJunctions;
    bool_paintCoastlines;
    bool_paintBuildingNormals;
    bool_disableRoute;
    bool_labelHighlighting;
    bool_labelCollisionEnabled;
    bool_labelAlternatePositionsEnabled;
    bool_labelTileDecodeEnabled;
    bool_labelAllowDefaultStyle;
    bool_labelUpdateMapTilesContinuously;
    bool_paintRouteDebugMarkers;
    bool_dontMatchRouteLine;
    bool_dontMapMatchToSnappedRouteLine;
    bool_highlightUnmatchedRouteLine;
    bool_paintRoadSigns;
    bool_paintLabelBounds;
    bool_paintLabelRoadFeatures;
    bool_paintLabelCollisionLines;
    bool_paintLabelCounts;
    bool_hideDirectionalArrows;
    bool_paintTrafficSkeleton;
    bool_loadGreenTraffic;
    bool_paintRoadsStitchedByName;
    bool_realisticWireframeEnabled;
    bool_altitudePauseLoading;
    bool_altitudeTexturePaging;
    bool_altitudeShowTileBounds;
    bool_altitudeHighResSatellite;
    bool_altitudeMipmapSatellite;
    bool_altitudeMipmapFlyover;
    bool_altitudeMipmapObjectTree;
    bool_altitudeShowNightLight;
    bool_altitudeNoTiltLimit;
    float _altitudeLodScale;
    float _altitudeTileQualityThreshold;
    float _altitudeForceGridTime;
    bool_altitudeProfilingEnabled;
    unsigned int _altitudeProfilingType;
    unsigned int _altitudeProfilingZones;
    NSString *_altitudeTelemetryURL;
    bool_dynamicMapModesEnabled;
    bool_isInstalledInLockScreen;
    bool_enableLoggingInLockScreen;
    bool_useBuildingShadowTexture;
    bool_drawContinuously;
    bool_layoutContinuously;
    bool_enableSignPostEvents;
    bool_useTransactionManager;
    bool_trackingCameraAutoPitch;
    bool_debugStyleAnimations;
    bool_renderInSeparateThread;
    bool_forceHiResBuildings;
    bool_readLandmarksFromDisk;
    bool_drawPerformanceHUD;
    bool_expandedPerformanceHUD;
    bool_immediateRasterTextureLoading;
    bool_paintPoiTiles;
    bool_useStaticTrafficFeed;
    bool_disableStylesheetAnimations;
    bool_trackingCameraRoutePanning;
    bool_trackingCameraZoomFurther;
}

@property bool paintMapTiles;
@property bool paintRoadBoundaries;
@property bool paintRoadTiles;
@property bool paintPoiTiles;
@property bool paintPointTiles;
@property bool paintPolygonTiles;
@property bool paintVertices;
@property bool paintJunctions;
@property bool paintCoastlines;
@property bool paintBuildingNormals;
@property bool disableRoute;
@property bool labelHighlighting;
@property bool labelCollisionEnabled;
@property bool labelAlternatePositionsEnabled;
@property bool labelTileDecodeEnabled;
@property bool labelAllowDefaultStyle;
@property bool labelUpdateMapTilesContinuously;
@property bool paintRouteDebugMarkers;
@property bool dontMatchRouteLine;
@property bool dontMapMatchToSnappedRouteLine;
@property bool highlightUnmatchedRouteLine;
@property bool paintRoadSigns;
@property bool paintLabelBounds;
@property bool paintLabelRoadFeatures;
@property bool paintLabelCollisionLines;
@property bool paintLabelCounts;
@property bool hideDirectionalArrows;
@property bool paintTrafficSkeleton;
@property bool loadGreenTraffic;
@property bool useStaticTrafficFeed;
@property bool paintRoadsStitchedByName;
@property bool realisticWireframeEnabled;
@property bool altitudePauseLoading;
@property bool altitudeTexturePaging;
@property bool altitudeShowTileBounds;
@property bool altitudeHighResSatellite;
@property bool altitudeMipmapSatellite;
@property bool altitudeMipmapFlyover;
@property bool altitudeMipmapObjectTree;
@property bool altitudeShowNightLight;
@property bool altitudeNoTiltLimit;
@property bool altitudeProfilingEnabled;
@property unsigned int altitudeProfilingType;
@property unsigned int altitudeProfilingZones;
@property float altitudeLodScale;
@property float altitudeTileQualityThreshold;
@property float altitudeForceGridTime;
@property(retain) NSString * altitudeTelemetryURL;
@property bool dynamicMapModesEnabled;
@property bool isInstalledInLockScreen;
@property bool enableLoggingInLockScreen;
@property bool useBuildingShadowTexture;
@property bool drawContinuously;
@property bool layoutContinuously;
@property bool enableSignPostEvents;
@property bool useTransactionManager;
@property bool trackingCameraAutoPitch;
@property bool debugStyleAnimations;
@property bool disableStylesheetAnimations;
@property bool renderInSeparateThread;
@property bool forceHiResBuildings;
@property bool readLandmarksFromDisk;
@property bool drawPerformanceHUD;
@property bool expandedPerformanceHUD;
@property bool immediateRasterTextureLoading;
@property bool trackingCameraRoutePanning;
@property bool trackingCameraZoomFurther;

+ (id)sharedSettings;

- (void)setTrackingCameraZoomFurther:(bool)arg1;
- (void)setTrackingCameraRoutePanning:(bool)arg1;
- (void)setImmediateRasterTextureLoading:(bool)arg1;
- (bool)expandedPerformanceHUD;
- (bool)drawPerformanceHUD;
- (void)setReadLandmarksFromDisk:(bool)arg1;
- (bool)readLandmarksFromDisk;
- (void)setForceHiResBuildings:(bool)arg1;
- (bool)forceHiResBuildings;
- (void)setRenderInSeparateThread:(bool)arg1;
- (void)setDisableStylesheetAnimations:(bool)arg1;
- (void)setTrackingCameraAutoPitch:(bool)arg1;
- (bool)trackingCameraAutoPitch;
- (void)setUseTransactionManager:(bool)arg1;
- (bool)useTransactionManager;
- (void)setEnableSignPostEvents:(bool)arg1;
- (bool)enableSignPostEvents;
- (void)setUseBuildingShadowTexture:(bool)arg1;
- (bool)useBuildingShadowTexture;
- (void)setEnableLoggingInLockScreen:(bool)arg1;
- (id)altitudeTelemetryURL;
- (void)setAltitudeProfilingZones:(unsigned int)arg1;
- (unsigned int)altitudeProfilingZones;
- (void)setAltitudeProfilingType:(unsigned int)arg1;
- (unsigned int)altitudeProfilingType;
- (bool)altitudeProfilingEnabled;
- (void)setAltitudeHighResSatellite:(bool)arg1;
- (void)setAltitudeNoTiltLimit:(bool)arg1;
- (bool)altitudeNoTiltLimit;
- (void)setAltitudeShowNightLight:(bool)arg1;
- (void)setAltitudeMipmapObjectTree:(bool)arg1;
- (void)setAltitudeMipmapFlyover:(bool)arg1;
- (void)setAltitudeMipmapSatellite:(bool)arg1;
- (void)setRealisticWireframeEnabled:(bool)arg1;
- (bool)realisticWireframeEnabled;
- (void)setPaintRoadsStitchedByName:(bool)arg1;
- (bool)paintRoadsStitchedByName;
- (void)setUseStaticTrafficFeed:(bool)arg1;
- (bool)useStaticTrafficFeed;
- (void)setLoadGreenTraffic:(bool)arg1;
- (void)setPaintTrafficSkeleton:(bool)arg1;
- (bool)hideDirectionalArrows;
- (void)setPaintLabelCounts:(bool)arg1;
- (void)setPaintLabelCollisionLines:(bool)arg1;
- (void)setPaintLabelRoadFeatures:(bool)arg1;
- (void)setPaintLabelBounds:(bool)arg1;
- (bool)paintLabelBounds;
- (void)setPaintRoadSigns:(bool)arg1;
- (bool)paintRoadSigns;
- (void)setDontMapMatchToSnappedRouteLine:(bool)arg1;
- (bool)dontMapMatchToSnappedRouteLine;
- (void)setDontMatchRouteLine:(bool)arg1;
- (void)setPaintRouteDebugMarkers:(bool)arg1;
- (bool)paintRouteDebugMarkers;
- (void)setLabelUpdateMapTilesContinuously:(bool)arg1;
- (void)setLabelAllowDefaultStyle:(bool)arg1;
- (bool)labelAllowDefaultStyle;
- (void)setLabelTileDecodeEnabled:(bool)arg1;
- (void)setLabelAlternatePositionsEnabled:(bool)arg1;
- (void)setLabelCollisionEnabled:(bool)arg1;
- (void)setLabelHighlighting:(bool)arg1;
- (void)setDisableRoute:(bool)arg1;
- (void)setPaintBuildingNormals:(bool)arg1;
- (bool)paintBuildingNormals;
- (void)setPaintCoastlines:(bool)arg1;
- (bool)paintCoastlines;
- (void)setPaintJunctions:(bool)arg1;
- (bool)paintJunctions;
- (void)setPaintVertices:(bool)arg1;
- (bool)paintVertices;
- (void)setPaintPolygonTiles:(bool)arg1;
- (bool)paintPolygonTiles;
- (void)setPaintPointTiles:(bool)arg1;
- (bool)paintPointTiles;
- (void)setPaintPoiTiles:(bool)arg1;
- (bool)paintPoiTiles;
- (void)setPaintRoadTiles:(bool)arg1;
- (bool)paintRoadTiles;
- (void)setPaintRoadBoundaries:(bool)arg1;
- (bool)paintRoadBoundaries;
- (void)setPaintMapTiles:(bool)arg1;
- (bool)isPerformanceGroupShown:(unsigned int)arg1;
- (void)hidePerformanceGroup:(unsigned int)arg1;
- (void)showPerformanceGroup:(unsigned int)arg1;
- (id)nameForPerformanceGroup:(unsigned int)arg1;
- (unsigned int)numPerformanceGroups;
- (void)setHighlightUnmatchedRouteLine:(bool)arg1;
- (void)setAltitudeProfilingEnabled:(bool)arg1;
- (void)setAltitudeTelemetryURL:(id)arg1;
- (void)setIsInstalledInLockScreen:(bool)arg1;
- (void)setHideDirectionalArrows:(bool)arg1;
- (bool)overlaysShouldDrawDebug;
- (void)setExpandedPerformanceHUD:(bool)arg1;
- (void)setDrawPerformanceHUD:(bool)arg1;
- (bool)shouldDrawDebug;
- (bool)isInstalledInLockScreen;
- (bool)enableLoggingInLockScreen;
- (float)altitudeForceGridTime;
- (float)altitudeTileQualityThreshold;
- (float)altitudeLodScale;
- (bool)altitudeShowNightLight;
- (bool)altitudeMipmapObjectTree;
- (bool)altitudeMipmapFlyover;
- (bool)altitudeMipmapSatellite;
- (bool)altitudeHighResSatellite;
- (bool)renderInSeparateThread;
- (bool)altitudeShowTileBounds;
- (bool)altitudeTexturePaging;
- (bool)altitudePauseLoading;
- (void)setAltitudeForceGridTime:(float)arg1;
- (void)setAltitudeTileQualityThreshold:(float)arg1;
- (void)setAltitudeShowTileBounds:(bool)arg1;
- (void)setAltitudeTexturePaging:(bool)arg1;
- (void)setAltitudePauseLoading:(bool)arg1;
- (void)setAltitudeLodScale:(float)arg1;
- (bool)dontMatchRouteLine;
- (bool)paintTrafficSkeleton;
- (bool)labelAlternatePositionsEnabled;
- (bool)paintLabelCollisionLines;
- (bool)paintLabelCounts;
- (bool)paintMapTiles;
- (bool)paintLabelRoadFeatures;
- (bool)labelTileDecodeEnabled;
- (bool)labelCollisionEnabled;
- (bool)labelUpdateMapTilesContinuously;
- (bool)disableRoute;
- (bool)highlightUnmatchedRouteLine;
- (bool)loadGreenTraffic;
- (bool)trackingCameraRoutePanning;
- (bool)trackingCameraZoomFurther;
- (bool)immediateRasterTextureLoading;
- (bool)disableStylesheetAnimations;
- (void)setDynamicMapModesEnabled:(bool)arg1;
- (bool)dynamicMapModesEnabled;
- (bool)labelHighlighting;
- (void)setLayoutContinuously:(bool)arg1;
- (bool)layoutContinuously;
- (void)setDrawContinuously:(bool)arg1;
- (bool)drawContinuously;
- (void)setDebugStyleAnimations:(bool)arg1;
- (bool)debugStyleAnimations;
- (id)init;

@end