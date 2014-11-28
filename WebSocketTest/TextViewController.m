//
//  TextViewController.m
//  WebSocketTest
//
//  Created by Vitaliy Delidov on 11/27/14.
//  Copyright (c) 2014 Vitaliy Delidov. All rights reserved.
//

#import "TextViewController.h"
#import "ViewController.h"


@interface TextViewController ()

@property (assign, nonatomic) IBOutlet UITextView *textView;

@end

@implementation TextViewController


- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:YES];
    
    NSString *header = @"RECEIVED MESSAGE:";
    self.textView.text = header;
}


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    NSNotificationCenter *nc = [NSNotificationCenter defaultCenter];
    
    [nc addObserver:self
           selector:@selector(showReceivedMessage:)
               name:ReceivedMessageDidChangeNotification
             object:nil];
}

#pragma mark - Notifications

- (void)showReceivedMessage:(NSNotification *)notification {
    
    NSData *data = [notification.userInfo objectForKey:ReceivedMessageUserInfoKey];
    
    NSString *message = nil;
    message = [NSString stringWithFormat:@"%@", data];
    
    dispatch_async(dispatch_get_main_queue(), ^{
        self.textView.text = [NSString stringWithFormat:@"%@\n%@", self.textView.text, message];
        [self.textView scrollRangeToVisible:self.textView.selectedRange];
    });
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    [super dealloc];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
