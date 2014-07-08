/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSArray;

@interface MKInstructionContents : NSObject  {
    int _maneuverType;
    int _transportType;
    NSString *_intersectionName;
    NSString *_destinationName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    bool_toFreeway;
}

@property int maneuverType;
@property(retain) NSString * roadName;
@property(retain) NSString * intersectionName;
@property(retain) NSString * destinationName;
@property(retain) NSString * exitNumber;
@property(retain) NSArray * branchNames;
@property(retain) NSArray * towardNames;
@property int transportType;
@property(readonly) bool useRoadName;
@property(readonly) bool useTowardNames;
@property(readonly) bool useIntersectionName;
@property(readonly) bool useDestinationName;
@property(readonly) bool hasName;
@property(readonly) NSString * primaryName;
@property(readonly) bool isExitManeuver;
@property bool toFreeway;
@property int junctionAngle;

+ (id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2;
+ (id)contentsWithSubstep:(id)arg1 transportType:(int)arg2;
+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2;

- (id)roadName;
- (int)junctionAngle;
- (void)setTowardNames:(id)arg1;
- (void)setBranchNames:(id)arg1;
- (id)primaryName;
- (bool)isExitManeuver;
- (void)setRoadName:(id)arg1;
- (id)_instructionsForSigns;
- (id)_instructionForChangeHighway;
- (id)_instructionForExit;
- (id)_instructionForRoundabout;
- (id)_walkingInstructionForRoundabout;
- (id)_instructionForArrival;
- (id)_instructionForFerry;
- (id)_instructionForUTurn;
- (id)_walkingInstructionForUTurn;
- (id)_instructionForBranch;
- (id)_instructionForTurn;
- (id)_walkingInstructionForTurn;
- (id)_instructionForStart;
- (id)_walkingInstructionForStart;
- (id)_instructionForContinue;
- (id)_walkingInstructionForContinue;
- (id)towardNames;
- (bool)useTowardNames;
- (id)intersectionName;
- (bool)useIntersectionName;
- (id)branchNames;
- (bool)useDestinationName;
- (void)setJunctionAngle:(int)arg1;
- (id)_exitNumberFromNameInfo:(id)arg1;
- (id)exitNumber;
- (void)setName:(id)arg1 signposts:(id)arg2;
- (void)setToFreeway:(bool)arg1;
- (bool)toFreeway;
- (void)setIntersectionName:(id)arg1;
- (id)_stringFromNameInfo:(id)arg1;
- (bool)useRoadName;
- (void)setManeuverType:(int)arg1;
- (void)_populateFromSubstep:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (int)maneuverType;
- (void)setExitNumber:(id)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (id)destinationName;
- (bool)hasName;
- (void)setDestinationName:(id)arg1;
- (id)instruction;
- (id)init;
- (void).cxx_destruct;
- (id)description;

@end