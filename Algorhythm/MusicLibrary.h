//
//  MusicLibrary.h
//  Algorhythm
//
//  Created by Benedict Aluan on 2/09/15.
//  Copyright (c) 2015 Pencil Rocket. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kIconLarge;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;

@end
