//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IOBluetoothDevice;

@protocol IOBluetoothDeviceAsyncCallbacks
- (void)sdpQueryComplete:(IOBluetoothDevice *)arg1 status:(int)arg2;
- (void)connectionComplete:(IOBluetoothDevice *)arg1 status:(int)arg2;
- (void)remoteNameRequestComplete:(IOBluetoothDevice *)arg1 status:(int)arg2;
@end

