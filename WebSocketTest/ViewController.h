//
//  ViewController.h
//  WebSocketTest
//
//  Created by Vitaliy Delidov on 11/27/14.
//  Copyright (c) 2014 Vitaliy Delidov. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const ReceivedMessageDidChangeNotification;
extern NSString *const ReceivedMessageUserInfoKey;

@interface ViewController : UIViewController <UITextFieldDelegate>

@property (assign, nonatomic) IBOutlet UITextField *uriTextField;
@property (assign, nonatomic) IBOutlet UITextField *messageTextField;
@property (assign, nonatomic) IBOutlet UIButton *connectButton;
@property (assign, nonatomic) IBOutlet UIButton *sendButton;
@property (assign, nonatomic) IBOutlet UITextView *textView;
@property (assign, nonatomic) IBOutlet UISwitch *booleanSwitch;
@property (assign, nonatomic) IBOutlet UISegmentedControl *segmentedControl;
@property (retain, nonatomic) NSData *receivedMessage;

- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;

@end

