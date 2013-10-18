/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSData, NSInvocation, NSURLRequest, WebView;

@interface WebViewLoadOperation : NSOperation
{
    WebView *_webView;
    NSData *_data;
    NSURLRequest *_urlRequest;
    NSInvocation *_loadInvocation;
    NSInvocation *_didLoadInvocation;
    BOOL _isExecuting;
    BOOL _isFinished;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)_webViewDidLoad:(id)arg1;
- (void)_end;
- (void)cancel;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (void)_setIsExecuting:(BOOL)arg1;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)_webViewLoadOperationCommonInitWithWebView:(id)arg1;
- (id)initWithWebView:(id)arg1 loadInvocation:(id)arg2 didLoadInvocation:(id)arg3;
- (id)initWithWebView:(id)arg1 loadInvocation:(id)arg2;
- (id)initWithWebView:(id)arg1 urlRequest:(id)arg2;
- (id)initWithWebView:(id)arg1 data:(id)arg2;

@end
