//
//  DataManager.h
//  WebSocketTest
//
//  Created by Vitaliy Delidov on 11/27/14.
//  Copyright (c) 2014 Vitaliy Delidov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Packet;

@interface DataManager : NSObject

@property (readonly, retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (DataManager *)sharedManager;
- (void)insertObject:(Packet *)packet;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end
