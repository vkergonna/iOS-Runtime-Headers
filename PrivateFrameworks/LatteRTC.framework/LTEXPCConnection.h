/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@class NSData, NSObject<OS_xpc_object>;

@interface LTEXPCConnection : NSObject {
    NSObject<OS_xpc_object> *connection;
    id context;
    int pid;
    NSData *tokenData;
}

@property NSObject<OS_xpc_object> * connection;
@property(retain) id context;
@property int pid;
@property(retain) NSData * tokenData;

- (id)connection;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)init;
- (int)pid;
- (void)setConnection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setTokenData:(id)arg1;
- (id)tokenData;

@end
