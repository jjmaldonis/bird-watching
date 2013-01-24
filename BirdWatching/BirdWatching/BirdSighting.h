//
//  BirdSighting.h
//  BirdWatching
//
//  Created by JASON MALDONIS on 1/22/13.
//  Copyright (c) 2013 Self. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;
-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;

@end

//http://developer.apple.com/library/ios/#documentation/iPhone/Conceptual/SecondiOSAppTutorial/CreatingAddView/CreatingAddView.html
//specifying a horizontal spacing constraint for the space between the two elements.