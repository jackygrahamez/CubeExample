//
//  EAGLView.h
//  CubeExample
//
//  Created by Brad Larson on 4/20/2010.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

#import "ESRenderer.h"

@interface EAGLView : UIView
{
    CGPoint lastMovementPosition;
@private
    id <ESRenderer> renderer;

}

- (void)drawView:(id)sender;

@end
