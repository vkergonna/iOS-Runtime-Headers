/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIVector;

@interface CIZoomBlur : CILinearBlur {
    CIVector *inputCenter;
}

@property(retain) CIVector * inputCenter;

+ (id)customAttributes;

- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;
- (id)_kernel;
- (id)inputCenter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })regionOf:(int)arg1 destRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 userInfo:(id)arg3;
- (void)setInputCenter:(id)arg1;

@end
