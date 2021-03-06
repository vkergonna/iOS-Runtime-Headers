/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester, GEOUsageCollectionRequest, NSLock, NSMapTable, NSMutableDictionary, NSString, NSTimer;

@interface GEOUsageManager : NSObject <PBRequesterDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _backgroundTaskEnd;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _backgroundTaskStart;

    GEOUsageCollectionRequest *_request;
    NSLock *_requestLock;
    GEORequester *_requester;
    NSMapTable *_requesterToBackgroundTask;
    NSMutableDictionary *_stateData;
    NSMutableDictionary *_stateTimingData;
    NSTimer *_updateTimer;
}

@property(copy) id backgroundTaskEnd;
@property(copy) id backgroundTaskStart;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedManager;

- (void)_applicationDeactivating;
- (void)_cleanupRequester;
- (void)_cleanupTimer;
- (void)_endBackgroundTaskForRequester:(id)arg1;
- (void)_prepareRequest;
- (void)_scheduleUpdateTimer;
- (void)_sendUsageToServer;
- (void)_startBackgroundTaskForRequester:(id)arg1;
- (void)_updateTimerFired:(id)arg1;
- (id)_usageURL;
- (id)backgroundTaskEnd;
- (id)backgroundTaskStart;
- (void)captureDirectionsFeedbackCollection:(id)arg1;
- (void)captureLeaveNowFeedbackCollection:(id)arg1;
- (void)captureMapsLaunchURLScheme:(id)arg1 sourceApplication:(id)arg2;
- (void)captureMapsUsageFeedbackCollection:(id)arg1;
- (void)captureRequestsForPlaceDataCache:(id)arg1 appIdentifier:(id)arg2;
- (void)captureStateTimingFeedbackCollection:(id)arg1;
- (void)captureStateTransition:(id)arg1 force:(BOOL)arg2;
- (void)captureSuggestionsFeedbackCollection:(id)arg1;
- (void)captureTileStateForGridCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3;
- (void)captureTileStateForLoadCoverage:(double)arg1 oldCoverage:(double)arg2 durationInLastState:(double)arg3;
- (void)captureTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (void)captureTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (void)captureTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)captureUsageDataForRequest:(id)arg1 service:(int)arg2;
- (void)captureUsageDataForRequest:(id)arg1 service:(int)arg2 requestType:(int)arg3;
- (void)captureUsageDataForTiles:(id)arg1;
- (void)clearStateTimingData;
- (id)createTileSetStateForType:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4;
- (void)dealloc;
- (id)init;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setBackgroundTaskEnd:(id)arg1;
- (void)setBackgroundTaskStart:(id)arg1;
- (BOOL)shouldIgnoreCollectionForCountry;

@end
