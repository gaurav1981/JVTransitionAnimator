//
//  JVTransitionAnimator.h
//  Pods
//
//  Created by Jorge Valbuena on 2015-04-20.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface JVTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat delay;
@property (nonatomic) CGFloat damping;
@property (nonatomic) CGFloat velocity;
@property (nonatomic) UIViewAnimationOptions options;

// triggering animations
@property (nonatomic) BOOL pushOffScreenAnimation;
@property (nonatomic) BOOL slideInOutAnimation;
@property (nonatomic) BOOL slideUpDownAnimation;
@property (nonatomic) BOOL zoomInAnimation;
@property (nonatomic) BOOL zoomOutAnimation;


#pragma mark - UIViewControllerAnimatedTransitioning protocol methods

- (void)animateTransition:(id<UIViewControllerContextTransitioning>)transitionContext;

- (NSTimeInterval)transitionDuration:(id<UIViewControllerContextTransitioning>)transitionContext;


#pragma mark - UIViewControllerTransitioningDelegate protocol methods

- (id<UIViewControllerAnimatedTransitioning>)animationControllerForPresentedController:(UIViewController *)presented presentingController:(UIViewController *)presenting sourceController:(UIViewController *)source;

- (id<UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)dismissed;


#pragma mark - Transition Animations

- (void)performPushOffScreenAnimation;

- (void)performSlideInOutAnimation;

- (void)performSlideUpDownAnimation;

- (void)performZoomInAnimation;

- (void)performZoomOutAnimation;


@end