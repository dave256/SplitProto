//
//  DetailTableViewCell.m
//  SplitProto
//
//  Created by David Reed on 4/25/11.
//  Copyright 2011 dave256apps.com. All rights reserved.
//

#import "DetailTableViewCell.h"


@implementation DetailTableViewCell
@synthesize label;
@synthesize textField;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)dealloc
{
    [label release];
    [textField release];
    [super dealloc];
}

@end
