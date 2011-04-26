//
//  UITableView+PRPSubviewAdditions.m
//  CellSubviewLocation
//
//  Created by Matt Drance on 9/9/10.
//  Copyright 2010 Bookhouse Software, LLC. All rights reserved.
//

#import "UITableView+PRPSubviewAdditions.h"

@implementation UITableView (PRPSubviewAdditions)

- (NSIndexPath *)prp_indexPathForRowContainingView:(UIView *)view {
    CGPoint correctedPoint = [view convertPoint:view.bounds.origin toView:self];
    return [self indexPathForRowAtPoint:correctedPoint];    
}

@end
