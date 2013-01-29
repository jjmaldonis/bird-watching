//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by JASON MALDONIS on 1/24/13.
//  Copyright (c) 2013 Self. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (strong, nonatomic) BirdSighting *birdSighting;

@end
