/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCConnection.h"

#import "EWSExchangeServiceBindingDelegate.h"

@class EWSExchangeServiceBinding, MFEWSAccount, NSString;

@interface MFEWSConnection : MCConnection <EWSExchangeServiceBindingDelegate>
{
    EWSExchangeServiceBinding *_binding;
}

@property(retain) EWSExchangeServiceBinding *binding; // @synthesize binding=_binding;
- (void).cxx_destruct;
- (void)exchangeServiceBinding:(id)arg1 didReceiveCertificateError:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)disconnectWithError:(id)arg1;
- (id)_sendMessage:(id)arg1 error:(id *)arg2;
- (void)_handleServerBusyError:(id)arg1;
- (id)sendMessage:(id)arg1 forRequest:(id)arg2;
- (void)disconnect;
- (void)quit;
- (BOOL)isValid;
- (void)_setupConnectionErrorForMonitorWithPort:(long long)arg1 usingSSL:(BOOL)arg2;
- (id)_fetchRootFolderId:(id *)arg1;
- (id)_connectAndAuthenticateDiscoveringBestSettings:(BOOL)arg1;
- (BOOL)connectAndAuthenticate;
- (BOOL)authenticate;
- (BOOL)connectDiscoveringBestSettings:(BOOL)arg1;
@property __weak MFEWSAccount *account;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

