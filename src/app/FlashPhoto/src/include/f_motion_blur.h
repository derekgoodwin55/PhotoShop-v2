/*******************************************************************************
 * Name            : f_motion_blur.h
 * Project         : FlashPhoto
 * Module          : filter
 * Description     : Header file for FMotionBlur class.
 * Copyright       : 2016 CSCI3081W TAs. All rights reserved.
 * Creation Date   : 4/4/15
 * Original Author : Seth Johnson
 *
******************************************************************************/
#ifndef SRC_INCLUDE_F_MOTION_BLUR_H_
#define SRC_INCLUDE_F_MOTION_BLUR_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "app/FlashPhoto/src/include/filter_convolve.h"
#include "app/FlashPhoto/src/include/k_motion_blur.h"
#include "app/FlashPhoto/src/include/ui_ctrl.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
namespace image_tools {

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief Implements a motion blurring filter.
 *
 * This is different that a blurring filter, which blurs in all directions. A
 * motion blur filter only blurs in one particular direction.
 *
 */
class FMotionBlur : public FilterConvolve {
 public:
  FMotionBlur(float amount, enum UICtrl::MotionBlurDirection direction) :
      FilterConvolve(new KMotionBlur(amount, direction), true) {}
};

} /* namespace image_tools */

#endif  /* SRC_INCLUDE_F_MOTION_BLUR_H_ */
