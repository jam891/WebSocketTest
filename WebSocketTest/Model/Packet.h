//
//  Packet.h
//  WebSocketTest
//
//  Created by Vitaliy Delidov on 11/27/14.
//  Copyright (c) 2014 Vitaliy Delidov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Packet : NSManagedObject

@property (nonatomic, retain) NSString * data;
@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSNumber * status;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSNumber * booleanSwitch;

@end
