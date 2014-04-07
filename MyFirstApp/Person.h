//
//  Person.h
//  MyFirstApp
//
//  Created by Ganapathiyadan, Deepu on 4/7/14.
//  Copyright (c) 2014 Paypal Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

//Default is (atomic, readonly, strong) For objects
//Default is (atomic, readonly, assign) For simple types.

//readonly: only generates the getter.
//readwite: generates both getter and setter.

//use assign on simple types. Dont use it on objects.

//Use atomic wisely, since calling getter ir setter on an atomic var will stop the main thread until the operation is completed.

//Don't use unsafe_unretained, its deprecated. unsafe_unretained means give me the reference but I dont own it.

//weak and unsafe_unretained does the same thing, but the difference is weak sets the reference to nil.

//copy: use it when your class is mutable. That means when you assign a value to a 'copy' variable it makes an immutable copy and assigns it.

@property (nonatomic, assign) int age;



@property (nonatomic, strong) NSString *name; //default is atomic.

- (id)initWithName:(NSString *)name age:(int)age;
- (void)walk;
- (void)talk;

@end
