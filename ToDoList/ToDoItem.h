//
//  ToDoItem.h
//  ToDoList
//
//  Created by giaunv on 2/13/15.
//  Copyright (c) 2015 John Appleseed. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly)NSDate *creationDate;

@end
