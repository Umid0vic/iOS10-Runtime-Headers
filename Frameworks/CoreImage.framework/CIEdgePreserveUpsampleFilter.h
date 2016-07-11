/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEdgePreserveUpsampleFilter : CIFilter {
    CIImage * inputImage;
    NSNumber * inputLumaSigma;
    CIImage * inputSmallImage;
    NSNumber * inputSpatialSigma;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputLumaSigma;
@property (nonatomic, retain) CIImage *inputSmallImage;
@property (nonatomic, retain) NSNumber *inputSpatialSigma;

+ (id)customAttributes;

- (id)_kernelGuideCombiner;
- (id)_kernelJointUpsamp;
- (id)inputImage;
- (id)inputLumaSigma;
- (id)inputSmallImage;
- (id)inputSpatialSigma;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaSigma:(id)arg1;
- (void)setInputSmallImage:(id)arg1;
- (void)setInputSpatialSigma:(id)arg1;

@end