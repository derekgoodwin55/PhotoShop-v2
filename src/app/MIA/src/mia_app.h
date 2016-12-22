/*******************************************************************************
> * Name            : mia_app.h
 * Project         : MIA
 * Module          : App
 * Description     : Header file for MIA class
 * Copyright       : 2016 CSCI3081W TAs. All rights reserved.
 * Creation Date   : 5/15/15
 * Original Author : Seth Johnson
 *
 ******************************************************************************/

#ifndef SRC_APP_MIA_SRC_MIA_APP_H_
#define SRC_APP_MIA_SRC_MIA_APP_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <string>
<<<<<<< HEAD:src/include/flashphoto_app.h
#include "include/base_gfx_app.h"
#include "include/color_data.h"
#include "include/pixel_buffer.h"
#include "include/filter_manager.h"
#include "include/io_manager.h"
#include "include/ui_ctrl.h"
#include "include/state_manager.h"
#include "include/tool.h"
=======

/* FIXME: ADDITIONAL INCLUDES AS NECESSARY HERE :-) */
>>>>>>> 5e3eaf3222e6ec22f52502218849b6550d5a5706:src/app/MIA/src/mia_app.h

/*******************************************************************************
 * Namespaces
 ******************************************************************************/
namespace image_tools {

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
class MIAApp : public BaseGfxApp {
 public:
  MIAApp(int width, int height, const std::string& marker_fname);
  virtual ~MIAApp(void);

  void MouseDragged(int x, int y) {}
  void MouseMoved(int x, int y) {}
  void LeftMouseDown(int x, int y);
  void LeftMouseUp(int x, int y) {}
  void Display(void);
  void GluiControl(int control_id);

  /**
   * @brief Initialize MIA
   *
   * @param[in] argc Unused--required by BaseGfxApp
   * @param[in] argv Unused--required by BaseGfxApp
   * @param[in] x Unused--required by BaseGfxApp
   * @param[in] y Unused--required by BaseGfxApp
   * @param[in] background_color The initial canvas color
   */
  void Init(
      int argc,
      char *argv[],
      int x,
      int y,
      ColorData background_color);

 private:
  /**
<<<<<<< HEAD:src/include/flashphoto_app.h
   * @brief Update the colors displayed on the GLUI control panel after updating
   * their values in FlashPhoto
   *
   */
  void update_colors(void);

=======
   * @brief Initialize the GLUI interface
   *
   */
>>>>>>> 5e3eaf3222e6ec22f52502218849b6550d5a5706:src/app/MIA/src/mia_app.h
  void InitGlui(void);
  void InitGraphics(void);

  /**
   * @brief Initialize the buffers for the main window
   */
  void InitializeBuffers(ColorData initial_color,
                         int width, int height);

  /* Copy/move assignment/construction disallowed */
  MIAApp(const MIAApp &rhs) = delete;
  MIAApp& operator=(const MIAApp &rhs) = delete;

  /**
   * @brief Manager for all filter operations
   */
  MIAFilterManager filter_manager_;

  /**
   * @brief Manager for all I/O operations
   */
  MIAIOManager io_manager_;

  /**
   * @brief Manager for redo/undo stack
   */
  StateManager state_manager_;

  // This is the pointer to the buffer where the display PixelBuffer is stored
  PixelBuffer* display_buffer_;

  // The path to the marker file
  std::string marker_fname_;

<<<<<<< HEAD:src/include/flashphoto_app.h
  // These are used to store the selections from the GLUI user interface
  Tool **tools_;

  // Previous mouse coordinates for interpolating mouse moves
  int mouse_last_x_, mouse_last_y_;
  float cur_color_red_;
  float cur_color_green_;
  float cur_color_blue_;
=======
  int cur_tool_;
>>>>>>> 5e3eaf3222e6ec22f52502218849b6550d5a5706:src/app/MIA/src/mia_app.h
};

}  /* namespace image_tools */

#endif  // SRC_APP_MIA_SRC_MIA_APP_H_
