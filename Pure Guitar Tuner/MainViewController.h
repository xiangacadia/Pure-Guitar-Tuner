//
//  MainViewController.h
//  Pure Guitar Tuner
//
//  Created by Taylor Franklin on 12/30/13.
//  Copyright (c) 2013 Taylor Franklin. All rights reserved.
//

#import "FlipsideViewController.h"
#import "GTNote.h"
#import "PitchDetector.h"
#import "RWKnobControl.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIScrollView *scrollView;
@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;
@property (strong, nonatomic) RWKnobControl *knobControl;
@property (strong, nonatomic) UIView *knobPlaceholder;
@property (strong, nonatomic) GTNote *noteData;

//@property (nonatomic, strong) UIButton *insideButton;
//@property (nonatomic, strong) UIButton *outsideButton;
@property (nonatomic, strong) UIView *buttonView;


@property (nonatomic, strong) UILabel *noteDisplay;
@property (nonatomic, retain) UILabel *freqencyDisplay;
@property (nonatomic, assign) double currentFrequency;
@property (nonatomic, strong) NSString *currentNote;
@property(assign) BOOL isListening;

@property (assign) BOOL isInside;

@property (nonatomic, strong) PitchDetector *pitchDetector;

- (void)updateFrequencyLabel;

- (void)updateToFrequncy:(double)freqency;

- (void)insideButtonClicked:(UIButton *)sender;

- (void)outsideButtonClicked:(UIButton *)sender;

@end
