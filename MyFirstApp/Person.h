//
//  Person.h
//  MyFirstApp
//
//  Created by Ganapathiyadan, Deepu on 4/7/14.
//  Copyright (c) 2014 Paypal Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property NSString *name;
@property int age;

- (id)initWithName:(NSString *)name age:(int)age;
- (void)walk;
- (void)talk;

@end
