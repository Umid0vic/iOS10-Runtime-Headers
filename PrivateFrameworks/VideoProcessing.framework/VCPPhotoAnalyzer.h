/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPhotoAnalyzer : NSObject {
    NSMutableDictionary * _analysis;
    NSDictionary * _exif;
    NSData * _featureData;
    struct __CVBuffer { } * _image;
    struct __CVBuffer { } * _imageLowRes;
    unsigned long long  _irisAnalyses;
    AVAsset * _irisAsset;
    float  _irisPhotoExposureSec;
    float  _irisPhotoOffsetSec;
    bool  _isPano;
    unsigned long long  _phFaceFlags;
    NSDictionary * _phFaceResults;
    unsigned long long  _requestedAnalyses;
    NSMutableDictionary * _results;
    long long  _status;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (readonly) long long status;

+ (bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)resourceForAsset:(id)arg1 withResources:(id)arg2;

- (void).cxx_destruct;
- (id)analyzeAsset:(id /* block */)arg1;
- (int)analyzeImage:(unsigned long long*)arg1 performedAnalyses:(unsigned long long*)arg2 objectRect:(id)arg3 cancel:(id /* block */)arg4;
- (void)dealloc;
- (int)downscaleImage:(struct __CVBuffer { }*)arg1 scaledImage:(struct __CVBuffer {}**)arg2 majorDimension:(int)arg3;
- (id)initWithImage:(struct __CVBuffer { }*)arg1 exif:(id)arg2 pairMovie:(id)arg3 forAnalysisTypes:(unsigned long long)arg4;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (long long)status;

@end
