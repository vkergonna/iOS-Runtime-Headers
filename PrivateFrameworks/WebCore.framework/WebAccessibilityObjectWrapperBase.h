/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebAccessibilityObjectWrapperBase : NSObject {
    struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_8_1_1; } x8; } *m_object;
}

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)arg1;

- (id)accessibilityDescription;
- (id)accessibilityHelpText;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;
- (struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_8_1_1; } x8; }*)accessibilityObject;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (void)accessibilityPostedNotification:(id)arg1;
- (id)accessibilityTitle;
- (id)ariaLandmarkRoleDescription;
- (id)attachmentView;
- (struct CGPath { }*)convertPathToScreenSpace:(struct Path { struct CGPath {} *x1; }*)arg1;
- (struct CGPoint { float x1; float x2; })convertPointToScreenSpace:(struct FloatPoint { float x1; float x2; }*)arg1;
- (void)detach;
- (BOOL)fileUploadButtonReturnsValueInTitle;
- (id)initWithAccessibilityObject:(struct AccessibilityObject { int (**x1)(); unsigned int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::AccessibilityObject> {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; int x6; int x7; struct RetainPtr<WebAccessibilityObjectWrapper> { void *x_8_1_1; } x8; }*)arg1;
- (BOOL)titleTagShouldBeUsedInDescriptionField;
- (BOOL)updateObjectBackingStore;

@end
