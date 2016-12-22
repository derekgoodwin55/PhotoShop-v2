/*******************************************************************************
 * Name            : k_sharpen.h
 * Project         : FlashPhoto
 * Module          : kernel
 * Description     : Header file for sharpening kernel class
 * Copyright       : 2016 CSCI3081W TAs. All rights reserved.
 * Creation Date   : 4/3/15
 * Original Author : Seth Johnson
 *
 ******************************************************************************/

#ifndef SRC_INCLUDE_K_SHARPEN_H_
#define SRC_INCLUDE_K_SHARPEN_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "app/FlashPhoto/src/include/k_gaussian.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
namespace image_tools {

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief A sharpening kernel
 *
 * Defines a kernel that filters the colors of surrounding pixels out of each
 * pixel, resulting in a sharper image when convolved with an image.
 * Can be thought of as a high-pass filter.
 */
class KSharpen : public KGaussian {
 public:
  explicit KSharpen(float sigma);
  KSharpen();
};

} /* namespace image_tools */

#endif  /* SRC_INCLUDE_K_SHARPEN_H_ */
