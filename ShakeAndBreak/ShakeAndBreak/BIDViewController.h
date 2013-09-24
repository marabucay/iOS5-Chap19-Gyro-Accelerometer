//
//  BIDViewController.h
//  ShakeAndBreak
//
//  Created by Maria Alice C. Lim on 9/24/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>
#import <AudioToolbox/AudioToolbox.h>
#define kAccelerationThreshold 1.7
#define kUpdateInterval (1.0f / 10.0f)

@interface BIDViewController : UIViewController <UIAccelerometerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (strong, nonatomic) CMMotionManager *motionManager;
@property (assign, nonatomic) BOOL brokenScreenShowing;
@property (assign, nonatomic) SystemSoundID soundID;
@property (strong, nonatomic) UIImage *fixed;
@property (strong, nonatomic) UIImage *broken;

@end
