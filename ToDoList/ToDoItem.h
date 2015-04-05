//
//  ToDoItem.h
//  ToDoList
//
//  Created by Hem Poudyal on 4/4/15.
//  Copyright (c) 2015 Hem Poudyal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
