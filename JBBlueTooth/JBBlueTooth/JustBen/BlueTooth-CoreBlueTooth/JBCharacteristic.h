//
//  JBCharacteristic.h
//  JBBlueTooth
//
//  Determine whether a Characteristic need notify value
//
//  Created by YongbinZhang on 6/7/13.
//
//  Copyright (c) 2013 YongbinZhang
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>


@interface JBCharacteristic : NSObject

@property (nonatomic, retain, readonly) CBUUID *UUID;
@property (nonatomic, assign, readonly) BOOL needNotifyValue;
@property (nonatomic, retain) CBCharacteristic *characteristic;

@property (nonatomic, assign) CBCharacteristicProperties properties;
@property (nonatomic, assign) CBAttributePermissions permissions;

//  UUID: used for identifing a characteristic.
//  needNotifyValue: the focal point of the class, to determine whether a characteristic identified by UUID needs notify value.
- (id)initWithUUID:(CBUUID *)UUID NeedNotityValue:(BOOL)needNotifyValue;

@end
