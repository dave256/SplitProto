//
//  DetailViewController.h
//  SplitProto
//
//  Created by David Reed on 4/25/11.
//  Copyright 2011 dave256apps.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate, UITextFieldDelegate> {

}


@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;

@property (nonatomic, retain) id detailItem;

@property (nonatomic, retain) IBOutlet UILabel *detailDescriptionLabel;
@property (nonatomic, retain) UINib *detailCellNib;

@property (nonatomic, retain) IBOutlet UITableView *theTableView;


@end
