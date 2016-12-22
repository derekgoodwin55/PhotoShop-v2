/*******************************************************************************
 * Name            : f_saturate.cc
 * Project         : FlashPhoto
 * Module          : filter
 * Description     : Implementation of FSaturate class.
 * Copyright       : 2016 CSCI3081W TAs. All rights reserved.
 * Creation Date   : 4/1/15
 * Original Author : Seth Johnson
 *
******************************************************************************/

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "app/FlashPhoto/src/include/f_saturate.h"
#include <cmath>
#include "app/FlashPhoto/src/include/color_data.h"
#include "app/FlashPhoto/src/include/pixel_buffer.h"
#include "app/FlashPhoto/src/include/helpers.h"

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
namespace image_tools {

/*******************************************************************************
 * Member Functions
 ******************************************************************************/
ColorData FSaturate::GeneratePixel(const PixelBuffer &buffer,
                                    int x, int y) const {
  ColorData c = buffer.get_pixel(x, y);
  float lum = c.luminance();
  ColorData gray(lum, lum, lum);

  ColorData output = helpers::lerp(gray, c, amount_);
  return output;
}

} /* namespace image_tools */
