//
//  RootViewController.h
//  MyFirstApp
//
//  Created by Ganapathiyadan, Deepu on 4/7/14.
//  Copyright (c) 2014 Paypal Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;


- (IBAction)sayHello:(id)sender;

@end
