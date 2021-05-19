//
//  LCIMTextMessage.m
//  LeanCloudIM
//
//  Created by Qihe Bian on 1/12/15.
//  Copyright (c) 2015 LeanCloud Inc. All rights reserved.
//

#import "LCIMTextMessage.h"
#import "LCIMTypedMessage_Internal.h"

@implementation LCIMTextMessage

+ (void)load
{
    [self registerSubclass];
}

+ (LCIMMessageMediaType)classMediaType
{
    return kLCIMMessageMediaTypeText;
}

+ (instancetype)messageWithText:(NSString *)text
                     attributes:(NSDictionary *)attributes
{
    LCIMTextMessage *message = [[self alloc] init];
    message.text = text;
    if (attributes) {
        message.attributes = attributes;
    }
    return message;
}

@end