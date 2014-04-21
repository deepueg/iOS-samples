

#import "Person.h"

@implementation Person


//How to override init.
-(id)init
{
    return [self initWithName:@"John" age:40];
}


//How to overwrite init with args
- (id)initWithName:(NSString *)name age:(int)age
{
    self = [super self];
    if(self)//Checking if this is nil, this can be nil when there is no moemery to allocate an object.
    {
         //Never call setter inside init, becasue then you are calling setter on an object that is not fomed yet.
        _name = name;
        _age = age;
    }
    
    return self;
}

- (void)walk
{
    NSLog(@"walking");
}

- (void)talk
{
    NSLog(@"talking");
}

@end
