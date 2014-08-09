/* The file is part of Snowman decompiler.             */
/* See doc/licenses.txt for the licensing information. */

/* * SmartDec decompiler - SmartDec is a native code to C/C++ decompiler
 * Copyright (C) 2015 Alexander Chernov, Katerina Troshina, Yegor Derevenets,
 * Alexander Fokin, Sergey Levin, Leonid Tsvetkov
 *
 * This file is part of SmartDec decompiler.
 *
 * SmartDec decompiler is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * SmartDec decompiler is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SmartDec decompiler.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <nc/config.h>

#include <nc/core/ir/calling/Convention.h>

namespace nc {
namespace arch {
namespace x86 {

class X86Architecture;

/**
 * AMD64 calling convention.
 */
class AMD64CallingConvention: public core::ir::calling::Convention {
public:
    /**
     * Class constructor.
     */
    AMD64CallingConvention(const X86Architecture *architecture);
};

/**
 * Microsoft x64 calling convention.
 */
class Microsoft64CallingConvention: public core::ir::calling::Convention {
public:
    /**
     * Class constructor.
     */
    Microsoft64CallingConvention(const X86Architecture *architecture);
};

/**
 * 32-bit cdecl calling convention.
 */
class Cdecl32CallingConvention: public core::ir::calling::Convention {
public:
    /**
     * Class constructor.
     */
    Cdecl32CallingConvention(const X86Architecture *architecture);
};

/**
 * 16-bit cdecl calling convention.
 */
class Cdecl16CallingConvention: public core::ir::calling::Convention {
public:
    /**
     * Class constructor.
     */
    Cdecl16CallingConvention(const X86Architecture *architecture);
};

/**
 * 32-bit stdcall calling convention.
 */
class Stdcall32CallingConvention: public core::ir::calling::Convention {
public:
    /**
     * Class constructor.
     */
    Stdcall32CallingConvention(const X86Architecture *architecture);
};

} // namespace x86
} // namespace arch
} // namespace nc

/* vim:set et ts=4 sw=4: */