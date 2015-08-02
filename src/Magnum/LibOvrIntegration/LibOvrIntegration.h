#ifndef Magnum_LibOvrIntegration_LibOvrIntegration_h
#define Magnum_LibOvrIntegration_LibOvrIntegration_h
/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013, 2014, 2015
              Vladimír Vondruš <mosra@centrum.cz>
    Copyright © 2015 Jonathan Hale <squareys@googlemail.com>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

/** @file
 * @brief Forward declarations for the @ref Magnum::LibOvrIntegration namespace.
 *
 * @author Jonathan Hale (Squareys)
 */

#include <Magnum/Magnum.h>

namespace Magnum { namespace LibOvrIntegration {

class Hmd;
class SwapTextureSet;
class Context;
class Compositor;
class Layer;
class LayerDirect;
class LayerEyeFov;
class LayerEyeFovDepth;
class LayerQuad;
class TimewarpProjectionDescription;

enum class HmdType: Int;
enum class HmdCapability: Int;
enum class HmdTrackingCapability: Int;
enum class HmdStatusFlag: UnsignedByte;
enum class PerformanceHudMode: Int;
enum class LayerType: Int;

typedef Containers::EnumSet<HmdCapability> HmdCapabilities;
typedef Containers::EnumSet<HmdTrackingCapability> HmdTrackingCapabilities;
typedef Containers::EnumSet<HmdStatusFlag> HmdStatusFlags;

}}

#endif