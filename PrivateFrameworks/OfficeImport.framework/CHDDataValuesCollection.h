/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataValuesCollection : NSObject {
    bool mContainsStringValue;
    unsigned int mDataValueCount;
    struct __CFDictionary { } *mIndexToDataValueMap;
    struct __CFData { } *mPackedValues;
}

- (bool)addDataPoint:(struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; id x_2_2_3; unsigned int x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned int x3; }*)arg1;
- (bool)addDataValue:(id)arg1;
- (void)cleanup;
- (bool)containsStringValue;
- (id)contentFormatAtIndex:(unsigned int)arg1 resources:(id)arg2;
- (unsigned int)count;
- (struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; id x_2_2_3; unsigned int x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned int x3; }*)dataPointAtIndex:(unsigned int)arg1;
- (struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { bool x_2_2_1; double x_2_2_2; id x_2_2_3; unsigned int x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned int x3; }*)dataPointWithIndex:(unsigned int)arg1;
- (id)dataValueAtIndex:(unsigned int)arg1;
- (id)dataValueWithIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)finishReading;
- (id)init;
- (id)initWithDataPointCount:(unsigned int)arg1;
- (void)resetWithDataPointCount:(unsigned int)arg1;
- (void)setupBufferForValues:(unsigned int)arg1;

@end
