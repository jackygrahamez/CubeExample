//
//  ESRenderer.h
//  CubeExample
//
//  Created by Brad Larson on 4/20/2010.
//

#import <QuartzCore/QuartzCore.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>

@protocol ESRenderer <NSObject>

- (void)renderByRotatingAroundX:(float)xRotation rotatingAroundY:(float)yRotation;
- (BOOL)resizeFromLayer:(CAEAGLLayer *)layer;

@end
