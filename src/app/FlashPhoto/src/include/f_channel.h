/*******************************************************************************
 * Name            : f_channel.h
 * Project         : FlashPhoto
 * Module          : filter
 * Description     : Header file for FChannel class.
 * Copyright       : 2016 CSCI3081W TAs. All rights reserved.
 * Creation Date   : 4/4/15
 * Original Author : Seth Johnson
 *
 ******************************************************************************/

#ifndef SRC_INCLUDE_F_CHANNEL_H_
#define SRC_INCLUDE_F_CHANNEL_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <stdio.h>
#include "app/FlashPhoto/src/include/filter.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
namespace image_tools {

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief Filter one or more of the RGB channels, scaling each by the specified
 * amount
 *
 */
class FChannel : public Filter {
 public:
  FChannel(float r, float g, float b) : red_(r), green_(g), blue_(b) {}
  virtual ColorData GeneratePixel(const PixelBuffer & buffer,
                                   int x, int y) const;

 private:
  float red_; /**< Red scaling factor  */
  float green_; /**< Green scaling factor  */
  float blue_; /**< Blue scaling factor  */
};

} /* namespace image_tools */

#endif  /* SRC_INCLUDE_F_CHANNEL_H_ */
