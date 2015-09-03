//
//  PlaylistDetailViewController.h
//  Algorhythm
//
//  Created by Benedict Aluan on 2/09/15.
//  Copyright (c) 2015 Pencil Rocket. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Playlist;

@interface PlaylistDetailViewController : UIViewController

@property (strong, nonatomic) Playlist *playlist;
@property (strong, nonatomic) IBOutlet UIImageView *playlistCoverImage;
@property (strong, nonatomic) IBOutlet UILabel *playlistTitle;
@property (strong, nonatomic) IBOutlet UILabel *playlistDescription;

@property (strong, nonatomic) IBOutlet UILabel *playlistArtists0;
@property (strong, nonatomic) IBOutlet UILabel *playlistArtists1;
@property (strong, nonatomic) IBOutlet UILabel *playlistArtists2;
@end
