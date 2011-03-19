//
//  SlideController.h
//  Slides
//
//  Created by roc on 11-3-19.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface SlideController : UIViewController {
	UILabel *titleLabel;
	UIImageView *imageView;
	int pageNumber;
}

@property (nonatomic, retain) IBOutlet UILabel *titleLabel;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;

- (id)initWithPageNumber:(int)page;

@end
