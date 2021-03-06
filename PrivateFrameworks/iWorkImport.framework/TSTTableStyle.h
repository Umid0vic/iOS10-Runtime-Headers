/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableStyle : TSSStyle <TSDMixing, TSTTableStrokeProviding>

@property (nonatomic, readonly) TSDStroke *bodyColumnStroke;
@property (nonatomic, readonly) TSDStroke *bodyRowStroke;
@property (nonatomic, readonly) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TSDStroke *defaultHorizontalBorderStroke;
@property (nonatomic, readonly) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (nonatomic, readonly) TSDStroke *defaultVerticalBorderStroke;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSDStroke *footerRowBodyColumnStroke;
@property (nonatomic, readonly) TSDStroke *footerRowBodyRowStroke;
@property (nonatomic, readonly) TSDStroke *footerRowBorderStroke;
@property (nonatomic, readonly) TSDStroke *footerRowSeparatorStroke;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSDStroke *headerColumnBodyColumnStroke;
@property (nonatomic, readonly) TSDStroke *headerColumnBodyRowStroke;
@property (nonatomic, readonly) TSDStroke *headerColumnBorderStroke;
@property (nonatomic, readonly) TSDStroke *headerColumnSeparatorStroke;
@property (nonatomic, readonly) TSDStroke *headerRowBodyColumnStroke;
@property (nonatomic, readonly) TSDStroke *headerRowBodyRowStroke;
@property (nonatomic, readonly) TSDStroke *headerRowBorderStroke;
@property (nonatomic, readonly) TSDStroke *headerRowSeparatorStroke;
@property (readonly) Class superclass;

+ (void)initDefaultPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3;
+ (id)nonEmphasisTableProperties;
+ (unsigned long long)presetIDForStyleID:(id)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)styleIDForPreset:(unsigned long long)arg1;

- (id)bodyColumnStroke;
- (id)bodyRowStroke;
- (id)bodyRowStrokeEvenIfNotVisible;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)dealloc;
- (id)defaultHorizontalBorderStroke;
- (id)defaultHorizontalBorderStrokeEvenIfNotVisible;
- (id)defaultVerticalBorderStroke;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)footerRowBodyColumnStroke;
- (id)footerRowBodyRowStroke;
- (id)footerRowBorderStroke;
- (id)footerRowSeparatorStroke;
- (id)headerColumnBodyColumnStroke;
- (id)headerColumnBodyRowStroke;
- (id)headerColumnBorderStroke;
- (id)headerColumnSeparatorStroke;
- (id)headerRowBodyColumnStroke;
- (id)headerRowBodyRowStroke;
- (id)headerRowBorderStroke;
- (id)headerRowSeparatorStroke;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)loadTableStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TableStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct FillArchive {} *x4; struct Deprecated_TableStrokeArchive {} *x5; struct Deprecated_TableStrokeArchive {} *x6; struct Deprecated_TableStrokeArchive {} *x7; struct Deprecated_TableStrokeArchive {} *x8; struct Deprecated_TableStrokeArchive {} *x9; struct Deprecated_TableStrokeArchive {} *x10; struct Deprecated_TableStrokeArchive {} *x11; struct Deprecated_TableStrokeArchive {} *x12; struct Deprecated_TableStrokeArchive {} *x13; struct Deprecated_TableStrokeArchive {} *x14; struct Deprecated_TableStrokeArchive {} *x15; struct Deprecated_TableStrokeArchive {} *x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; struct Deprecated_TableStrokeArchive {} *x25; struct Deprecated_TableStrokeArchive {} *x26; struct Deprecated_TableStrokeArchive {} *x27; struct Deprecated_TableStrokeArchive {} *x28; struct StrokePresetListArchive {} *x29; }*)arg2 unarchiver:(id)arg3;
- (SEL)mapThemePropertyMapSelector;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (unsigned int)maskForStrokePresets:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)saveTableStylePropertiesToArchive:(struct TableStylePropertiesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct FillArchive {} *x4; struct Deprecated_TableStrokeArchive {} *x5; struct Deprecated_TableStrokeArchive {} *x6; struct Deprecated_TableStrokeArchive {} *x7; struct Deprecated_TableStrokeArchive {} *x8; struct Deprecated_TableStrokeArchive {} *x9; struct Deprecated_TableStrokeArchive {} *x10; struct Deprecated_TableStrokeArchive {} *x11; struct Deprecated_TableStrokeArchive {} *x12; struct Deprecated_TableStrokeArchive {} *x13; struct Deprecated_TableStrokeArchive {} *x14; struct Deprecated_TableStrokeArchive {} *x15; struct Deprecated_TableStrokeArchive {} *x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; struct Deprecated_TableStrokeArchive {} *x25; struct Deprecated_TableStrokeArchive {} *x26; struct Deprecated_TableStrokeArchive {} *x27; struct Deprecated_TableStrokeArchive {} *x28; struct StrokePresetListArchive {} *x29; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)strokeForStrokePreset:(unsigned long long)arg1;
- (void)validate;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;

@end
