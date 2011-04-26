//
//  UITableView+PRPSubviewAdditions.h
//  CellSubviewLocation
//
//  Created by Matt Drance on 9/9/10.
//  Copyright 2010 Bookhouse Software, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableView (PRPSubviewAdditions)

- (NSIndexPath *)prp_indexPathForRowContainingView:(UIView *)view;

@end
