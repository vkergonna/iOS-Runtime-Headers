/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */



@interface PTPWrappedBytes : NSObject 
{
    unsigned long long _offset;
    unsigned long long _capacity;
    BOOL _allocatedBytes;
    char *_bytes;
    NSInteger _fd;
    BOOL _useByteBuffer;
    unsigned long long _excessDataLength;
}

+ (id)wrappedBytesWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2;
+ (id)wrappedBytesWithCapacity64:(unsigned long long)arg1;

- (void*)mutableBytes;
- (unsigned long long)appendData:(id)arg1;
- (id)init;
- (void)dealloc;
- (const void*)bytes;
- (id)description;
- (id)initWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2;
- (id)initWithFileDescriptor:(NSInteger)arg1 capacity64:(unsigned long long)arg2;
- (unsigned long long)setCapacity64:(unsigned long long)arg1;
- (unsigned long long)length64;
- (BOOL)wasInitWithFD;
- (unsigned long long)excessDataLength;
- (double)percentFull;
- (void)setLength64:(unsigned long long)arg1;
- (id)initWithCapacity64:(unsigned long long)arg1;
- (unsigned long long)appendBytes:(const void*)arg1 length64:(unsigned long long)arg2;
- (unsigned long long)capacity64;

@end