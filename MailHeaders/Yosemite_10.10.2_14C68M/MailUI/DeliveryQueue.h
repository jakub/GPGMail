/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCInvocationQueue.h"

#import "MCActivityTarget.h"
#import "MVTerminationHandler.h"

@class MCActivityMonitor, MFMessageStore, NSMutableDictionary, NSMutableSet, NSString;

@interface DeliveryQueue : MCInvocationQueue <MCActivityTarget, MVTerminationHandler>
{
    NSMutableSet *_documentIdsToIgnore;
    NSMutableDictionary *_errorResponses;
    NSMutableDictionary *_alternateDeliveryAccounts;
    NSMutableSet *_accountsOnHold;
    BOOL _backgroundProcessingEnabled;
    BOOL _queueIsActive;
    BOOL _resetDeliveryQueueWhenDoneWithCurrentMessage;
    MFMessageStore *_outboxStore;
    double _beginDeliveryTime;
    MCActivityMonitor *_deliveryMonitor;
}

+ (id)sharedDeliveryQueue;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL resetDeliveryQueueWhenDoneWithCurrentMessage; // @synthesize resetDeliveryQueueWhenDoneWithCurrentMessage=_resetDeliveryQueueWhenDoneWithCurrentMessage;
@property(nonatomic) BOOL queueIsActive; // @synthesize queueIsActive=_queueIsActive;
@property(retain, nonatomic) MCActivityMonitor *deliveryMonitor; // @synthesize deliveryMonitor=_deliveryMonitor;
@property(nonatomic) double beginDeliveryTime; // @synthesize beginDeliveryTime=_beginDeliveryTime;
@property(retain) MFMessageStore *outboxStore; // @synthesize outboxStore=_outboxStore;
@property BOOL backgroundProcessingEnabled; // @synthesize backgroundProcessingEnabled=_backgroundProcessingEnabled;
- (void).cxx_destruct;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)stopIgnoringDocumentId:(id)arg1;
- (void)ignoreDocumentId:(id)arg1;
- (id)alternateDeliveryAccountForAccount:(id)arg1;
- (void)unfreezeDeliveryAccount:(id)arg1 reprocessQueue:(BOOL)arg2;
- (void)setAlternateDeliveryAccount:(id)arg1 forAccount:(id)arg2;
- (void)_deliveryAccountsDidChange:(id)arg1;
- (void)_networkConfigurationChanged:(id)arg1;
- (void)cancelDeliveryOfMessageWithDocumentId:(id)arg1;
- (void)cancelDeliveryOfMessage:(id)arg1;
- (long long)_performDeliveryOfMessage:(id)arg1 accountUsed:(id *)arg2;
- (void)_closeOutboxStore;
- (void)_outboxDidOpen:(id)arg1;
- (BOOL)_openOutboxStoreIfNeeded;
- (void)_resetStateAndReprocessQueueIfNecessary;
- (void)resetStateAndReprocessQueueIfNecessary;
- (void)resetStateAndReprocessQueue;
- (long long)appendMessageToQueue:(id)arg1 replacingOriginalMessage:(id)arg2;
- (long long)appendMessageToQueue:(id)arg1;
- (BOOL)_isMessageBeingEdited:(id)arg1;
- (void)_deliverQueuedMessages:(unsigned long long)arg1;
- (void)_processDeliveryQueueStartingAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

