//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCPayCheckoutCounterLogicDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface WAJSEventHandler_requestPaymentToBank : WAJSEventHandler_BaseEvent <WCPayCheckoutCounterLogicDelegate>
{
    NSDictionary *_param;
}

@property(copy, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)onWCPayCheckoutFail:(id)arg1;
- (void)onWCPayCheckoutSuccess:(id)arg1;
- (id)getWCPayCheckoutParam;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
