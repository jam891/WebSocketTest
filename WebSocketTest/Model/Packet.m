//
//  Packet.m
//  WebSocketTest
//
//  Created by Vitaliy Delidov on 11/27/14.
//  Copyright (c) 2014 Vitaliy Delidov. All rights reserved.
//

#import "Packet.h"


@implementation Packet

@dynamic data;
@dynamic timeStamp;
@dynamic status;
@dynamic type;
@dynamic booleanSwitch;

- (NSString *)description {
    return [NSString stringWithFormat:@"Packet type: %@, data: %@, switch: %@, date: %@, status: %@",
            self.type, self.data, self.booleanSwitch, self.timeStamp, self.status];
}

@end
