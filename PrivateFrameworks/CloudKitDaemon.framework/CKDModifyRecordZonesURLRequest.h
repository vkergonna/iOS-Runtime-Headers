/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest {
    BOOL _markZonesAsUserPurged;
    NSMutableDictionary *_recordZoneIDByRequestID;
    NSArray *_recordZoneIDsToDelete;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordZoneModifiedBlock;

    NSArray *_recordZonesToSave;
}

@property BOOL markZonesAsUserPurged;
@property(retain) NSMutableDictionary * recordZoneIDByRequestID;
@property(retain) NSArray * recordZoneIDsToDelete;
@property(copy) id recordZoneModifiedBlock;
@property(retain) NSArray * recordZonesToSave;

- (void).cxx_destruct;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (BOOL)markZonesAsUserPurged;
- (int)operationType;
- (id)recordZoneIDByRequestID;
- (id)recordZoneIDsToDelete;
- (id)recordZoneModifiedBlock;
- (id)recordZonesToSave;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setMarkZonesAsUserPurged:(BOOL)arg1;
- (void)setRecordZoneIDByRequestID:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZoneModifiedBlock:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (id)zoneIDsToLock;

@end
