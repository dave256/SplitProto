//
//  DetailTableViewCell.h
//  SplitProto
//
//  Created by David Reed on 4/25/11.
//  Copyright 2011 dave256apps.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PRPNibBasedTableViewCell.h"

@interface DetailTableViewCell : PRPNibBasedTableViewCell {
    UILabel *label;
    UITextField *textField;
}

@property (nonatomic, retain) IBOutlet UILabel *label;
@property (nonatomic, retain) IBOutlet UITextField *textField;


@end
