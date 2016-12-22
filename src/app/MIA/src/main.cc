/*******************************************************************************
 * Name            : main.cc
<<<<<<< HEAD:src/main.cc
 * Project         : FlashPhoto
 * Module          : App
 * Description     : Do ALL THE THINGS!
=======
 * Project         : MIA
 * Module          : main
 * Description     : Entry point for MIA application
>>>>>>> 5e3eaf3222e6ec22f52502218849b6550d5a5706:src/app/MIA/src/main.cc
 * Copyright       : 2016 CSCI3081W TAs. All rights reserved.
 * Creation Date   : 1/15/15
 * Original Author : Seth Johnson
 *
 ******************************************************************************/

/*******************************************************************************
 * Includes
 ******************************************************************************/
/* FIXME: ADDITIONAL INCLUDES AS NECESSARY HERE :-) */

/*******************************************************************************
 * Non-Member Functions
 ******************************************************************************/
int main(int argc, char** argv) {
  if (argc == 1) {
    image_tools::MIAApp *app = new image_tools::MIAApp(
        400,
        400,
        "resources/marker.png");
    app->Init(argc, argv, 50, 50,
              image_tools::ColorData(1, 1, static_cast<float>(0.95)));
    app->RunMainLoop();
    delete app;
  } else {
    /* Create command line interface */
  }
  return 1;
} /* main() */
