/*
 * Copyright (c) 2019 MS-RTOS Team.
 * All rights reserved.
 *
 * Detailed license information can be found in the LICENSE file.
 *
 * File: ms_touchgfx_hal.hpp TouchGFX HAL.
 *
 * Author: Jiao.jinxing <jiaojixing@acoinfo.com>
 *
 */

#ifndef MS_TOUCHGFX_HAL_HPP
#define MS_TOUCHGFX_HAL_HPP

#include <touchgfx/hal/HAL.hpp>

/**
 * @class TouchGFXHAL
 *
 * @brief HAL implementation for TouchGFX.
 *
 * @sa HAL
 */
class TouchGFXHAL : public touchgfx::HAL
{
public:
    /**
     * @fn TouchGFXHAL::TouchGFXHAL(touchgfx::DMA_Interface& dma, touchgfx::LCD& display, touchgfx::TouchController& tc, uint16_t width, uint16_t height) : TouchGFXGeneratedHAL(dma, display, tc, width, height)
     *
     * @brief Constructor.
     *
     *        Constructor. Initializes members.
     *
     * @param [in,out] dma     Reference to DMA interface.
     * @param [in,out] display Reference to LCD interface.
     * @param [in,out] tc      Reference to Touch Controller driver.
     * @param width            Width of the display.
     * @param height           Height of the display.
     */
    TouchGFXHAL(touchgfx::DMA_Interface& dma, touchgfx::LCD& display, touchgfx::TouchController& tc, uint16_t width, uint16_t height) : touchgfx::HAL(dma, display, tc, width, height)
    {
    }

    void initialize();

    /**
     * @fn virtual void TouchGFXHAL::disableInterrupts();
     *
     * @brief Disables the DMA and LCD interrupts.
     *
     *        Disables the DMA and LCD interrupts.
     */
    void disableInterrupts();

    /**
     * @fn virtual void TouchGFXHAL::enableInterrupts();
     *
     * @brief Enables the DMA and LCD interrupts.
     *
     *        Enables the DMA and LCD interrupts.
     */
    void enableInterrupts();

    /**
     * @fn virtual void TouchGFXHAL::configureInterrupts();
     *
     * @brief Sets the DMA and LCD interrupt priorities.
     *
     *        Sets the DMA and LCD interrupt priorities.
     */
    void configureInterrupts();

    /**
     * @fn virtual void TouchGFXHAL::enableLCDControllerInterrupt();
     *
     * @brief Configure the LCD controller to fire interrupts at VSYNC.
     *
     *        Configure the LCD controller to fire interrupts at VSYNC. Called automatically
     *        once TouchGFX initialization has completed.
     */
    void enableLCDControllerInterrupt();

    /**
     * @fn virtual void TouchGFXHAL::flushFrameBuffer();
     *
     * @brief This function is called whenever the framework has performed a complete draw.
     *
     * This specialization is only in place to keep compilers happy. Base impl. will call the
     * Rect version.
     * @see HAL::flushFrameBuffer
     */
    void flushFrameBuffer();

    /**
     * @fn virtual void TouchGFXHAL::flushFrameBuffer(const Rect& rect);
     *
     * @brief This function is called whenever the framework has performed a partial draw.
     *
     *        This function is called whenever the framework has performed a partial draw.
     *        On the STM32F7, make sure to clean and invalidate the data cache. This is to
     *        ensure that LTDC sees correct data when transferring to the display.
     *
     * @param rect The area of the screen that has been drawn, expressed in absolute coordinates.
     *
     * @see flushFrameBuffer().
     */
    void flushFrameBuffer(const touchgfx::Rect& rect);

protected:
    /**
     * @fn virtual uint16_t* TouchGFXHAL::getTFTFrameBuffer() const;
     *
     * @brief Gets the frame buffer address used by the TFT controller.
     *
     *        Gets the frame buffer address used by the TFT controller.
     *
     * @return The address of the frame buffer currently being displayed on the TFT.
     */
    uint16_t* getTFTFrameBuffer() const;

    /**
     * @fn virtual void TouchGFXHAL::setTFTFrameBuffer(uint16_t* adr);
     *
     * @brief Sets the frame buffer address used by the TFT controller.
     *
     *        Sets the frame buffer address used by the TFT controller.
     *
     * @param [in,out] adr New frame buffer address.
     */
    void setTFTFrameBuffer(uint16_t* adr);
};

#endif // MS_TOUCHGFX_HAL_HPP
