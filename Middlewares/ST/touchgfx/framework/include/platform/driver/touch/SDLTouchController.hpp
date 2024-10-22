/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.13.0 distribution.
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef SDLTOUCHCONTROLLER_HPP
#define SDLTOUCHCONTROLLER_HPP

#include <platform/driver/touch/TouchController.hpp>

namespace touchgfx
{
/**
 * @class SDLTouchController SDLTouchController.hpp platform/driver/touch/SDLTouchController.hpp
 *
 * @brief TouchController for the simulator.
 *
 *        TouchController for the simulator.
 *
 * @sa TouchController
 */
class SDLTouchController : public TouchController
{
public:
    /**
     * @fn virtual void SDLTouchController::init();
     *
     * @brief Initializes touch controller.
     *
     *        Initializes touch controller.
     */
    virtual void init();

    /**
     * @fn virtual bool SDLTouchController::sampleTouch(int32_t& x, int32_t& y);
     *
     * @brief Checks whether the touch screen is being touched, and if so, what coordinates.
     *
     *        Checks whether the touch screen is being touched, and if so, what coordinates.
     *
     * @param [out] x The x position of the touch
     * @param [out] y The y position of the touch
     *
     * @return True if a touch has been detected, otherwise false.
     */
    virtual bool sampleTouch(int32_t& x, int32_t& y);
};

} // namespace touchgfx

#endif // SDLTOUCHCONTROLLER_HPP
