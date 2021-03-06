/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReference;

@interface EDSharedFormula : EDFormula {
    unsigned int _baseFormulaIndex;
    EDReference *_baseFormulaRange;
    int _columnBaseOrOffset;
    bool _forceNonBaseFormula;
    int _rowBaseOrOffset;
}

@property unsigned int baseFormulaIndex;
@property(readonly) EDReference * baseFormulaRange;
@property int columnBaseOrOffset;
@property bool forceNonBaseFormula;
@property int rowBaseOrOffset;

- (void)archiveByAppendingToMutableData:(struct __CFData { }*)arg1;
- (unsigned int)baseFormulaIndex;
- (id)baseFormulaRange;
- (id)baseFormulaWithRowBlocks:(id)arg1;
- (int)columnBaseOrOffset;
- (bool)convertTokensToShared;
- (void)dealloc;
- (bool)forceNonBaseFormula;
- (id)init;
- (id)initWithFormula:(id)arg1;
- (bool)isBaseFormula;
- (bool)isSharedFormula;
- (int)rowBaseOrOffset;
- (void)setBaseFormulaIndex:(unsigned int)arg1;
- (void)setColumnBaseOrOffset:(int)arg1;
- (void)setForceNonBaseFormula:(bool)arg1;
- (void)setRowBaseOrOffset:(int)arg1;
- (void)unarchiveFromData:(struct __CFData { }*)arg1 offset:(unsigned int*)arg2;
- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;
- (id)warningWithRowBlocks:(id)arg1;

@end
