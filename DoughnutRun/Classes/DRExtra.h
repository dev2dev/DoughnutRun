//
//  DRExtra.h
//  DoughnutRun
//
//  Created by Cory Kilger on 6/13/10.
//  Copyright 2010 Cory Kilger. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface DRExtra :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * identifier;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet* items;

@end


@interface DRExtra (CoreDataGeneratedAccessors)
- (void)addItemsObject:(NSManagedObject *)value;
- (void)removeItemsObject:(NSManagedObject *)value;
- (void)addItems:(NSSet *)value;
- (void)removeItems:(NSSet *)value;

@end

