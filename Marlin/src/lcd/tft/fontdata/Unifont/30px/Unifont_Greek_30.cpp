/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2023 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../fontdata.h"

#if HAS_GRAPHICAL_TFT && TFT_FONT == UNIFONT

// Unifont Greek 48pt, capital 'A' height: 30px, width: 100%, range: 0x0386-0x03ce, glyphs: 63
extern const uint8_t Unifont_Greek_30[6228] = {
  129,30,134,3,206,3,42,250, // unifont_t
  // 0x0386  Ά
  18,42,126,24,3,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,0,0,0,0,0,0,0,0,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0387  ·
  255,
  // 0x0388  Έ
  18,42,126,24,3,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,0,0,0,0,0,0,0,0,0,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,255,192,255,255,192,255,255,192,
  // 0x0389  Ή
  18,42,126,24,3,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,0,0,0,0,0,0,0,0,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x038a  Ί
  18,42,126,24,3,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,0,0,0,0,0,0,0,0,0,31,255,192,31,255,192,31,255,192,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,31,255,192,31,255,192,31,255,192,
  // 0x038b  ΋
  255,
  // 0x038c  Ό
  18,42,126,24,3,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,0,0,0,0,0,0,0,0,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x038d  ΍
  255,
  // 0x038e  Ύ
  21,42,126,24,3,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,0,0,0,0,0,0,0,0,0,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,3,142,0,3,142,0,3,142,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x038f  Ώ
  21,45,135,24,3,253,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,0,0,0,0,0,0,0,0,0,31,255,192,31,255,192,31,255,192,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,28,1,192,28,1,192,28,1,192,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,255,143,248,255,143,248,255,143,248,
  // 0x0390  ΐ
  255,
  // 0x0391  Α
  18,30,90,24,3,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0392  Β
  18,30,90,24,3,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,
  // 0x0393  Γ
  18,30,90,24,3,0,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x0394  Δ
  21,30,90,24,3,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,255,255,248,255,255,248,255,255,248,
  // 0x0395  Ε
  18,30,90,24,3,0,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,255,192,255,255,192,255,255,192,
  // 0x0396  Ζ
  18,30,90,24,3,0,255,255,192,255,255,192,255,255,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,14,0,0,14,0,0,14,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,255,255,192,255,255,192,255,255,192,
  // 0x0397  Η
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x0398  Θ
  18,30,90,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,227,241,192,227,241,192,227,241,192,227,241,192,227,241,192,227,241,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x0399  Ι
  15,30,60,24,6,0,255,254,255,254,255,254,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,255,254,255,254,255,254,
  // 0x039a  Κ
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,14,0,224,14,0,224,14,0,224,112,0,224,112,0,224,112,0,227,128,0,227,128,0,227,128,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,227,128,0,227,128,0,227,128,0,224,112,0,224,112,0,224,112,0,224,14,0,224,14,0,224,14,0,224,1,192,224,1,192,224,1,192,
  // 0x039b  Λ
  21,30,90,24,3,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,
  // 0x039c  Μ
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,252,15,192,252,15,192,252,15,192,252,15,192,252,15,192,252,15,192,227,241,192,227,241,192,227,241,192,227,241,192,227,241,192,227,241,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x039d  Ν
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,252,1,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,227,129,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,113,192,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,15,192,224,1,192,224,1,192,224,1,192,
  // 0x039e  Ξ
  18,30,90,24,3,0,255,255,192,255,255,192,255,255,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,254,0,31,254,0,31,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,192,255,255,192,255,255,192,
  // 0x039f  Ο
  18,30,90,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x03a0  Π
  21,30,90,24,3,0,255,255,248,255,255,248,255,255,248,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,
  // 0x03a1  Ρ
  18,30,90,24,3,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,255,254,0,255,254,0,255,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x03a2  ΢
  255,
  // 0x03a3  Σ
  18,30,90,24,3,0,255,255,192,255,255,192,255,255,192,224,0,0,224,0,0,224,0,0,28,0,0,28,0,0,28,0,0,3,128,0,3,128,0,3,128,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,255,255,192,255,255,192,255,255,192,
  // 0x03a4  Τ
  21,30,90,24,3,0,255,255,248,255,255,248,255,255,248,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x03a5  Υ
  21,30,90,24,3,0,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,28,1,192,3,142,0,3,142,0,3,142,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x03a6  Φ
  21,30,90,24,3,0,255,255,248,255,255,248,255,255,248,0,112,0,0,112,0,0,112,0,31,255,192,31,255,192,31,255,192,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,31,255,192,31,255,192,31,255,192,0,112,0,0,112,0,0,112,0,255,255,248,255,255,248,255,255,248,
  // 0x03a7  Χ
  18,30,90,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x03a8  Ψ
  21,30,90,24,3,0,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,31,255,192,31,255,192,31,255,192,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x03a9  Ω
  21,30,90,24,3,0,31,255,192,31,255,192,31,255,192,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,28,1,192,28,1,192,28,1,192,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,3,142,0,255,143,248,255,143,248,255,143,248,
  // 0x03aa  Ϊ
  255,
  // 0x03ab  Ϋ
  255,
  // 0x03ac  ά
  18,39,117,24,3,0,0,14,0,0,14,0,0,14,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,129,192,31,129,192,31,129,192,224,113,192,224,113,192,224,113,192,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,113,192,224,113,192,224,113,192,31,129,192,31,129,192,31,129,192,
  // 0x03ad  έ
  18,39,117,24,3,0,0,14,0,0,14,0,0,14,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,255,192,31,255,192,31,255,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,31,254,0,31,254,0,31,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,31,255,192,31,255,192,31,255,192,
  // 0x03ae  ή
  18,45,135,24,3,250,0,14,0,0,14,0,0,14,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,227,254,0,227,254,0,227,254,0,252,1,192,252,1,192,252,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,
  // 0x03af  ί
  12,39,78,24,6,0,0,112,0,112,0,112,3,128,3,128,3,128,28,0,28,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,252,0,252,0,252,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,3,240,3,240,3,240,
  // 0x03b0  ΰ
  255,
  // 0x03b1  α
  18,24,72,24,3,0,31,129,192,31,129,192,31,129,192,224,113,192,224,113,192,224,113,192,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,113,192,224,113,192,224,113,192,31,129,192,31,129,192,31,129,192,
  // 0x03b2  β
  18,36,108,24,3,250,31,240,0,31,240,0,31,240,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,255,254,0,255,254,0,255,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,252,1,192,252,1,192,252,1,192,227,254,0,227,254,0,227,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x03b3  γ
  21,24,72,24,3,0,31,128,56,31,128,56,31,128,56,224,112,56,224,112,56,224,112,56,0,113,192,0,113,192,0,113,192,0,14,0,0,14,0,0,14,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,
  // 0x03b4  δ
  18,30,90,24,3,0,3,254,0,3,254,0,3,254,0,28,0,0,28,0,0,28,0,0,28,0,0,28,0,0,28,0,0,28,0,0,28,0,0,28,0,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x03b5  ε
  18,24,72,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,0,0,224,0,0,224,0,0,31,254,0,31,254,0,31,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x03b6  ζ
  15,36,72,24,6,250,224,0,224,0,224,0,224,0,224,0,224,0,31,240,31,240,31,240,3,128,3,128,3,128,28,0,28,0,28,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,31,240,31,240,31,240,0,14,0,14,0,14,31,240,31,240,31,240,
  // 0x03b7  η
  18,30,90,24,3,250,227,254,0,227,254,0,227,254,0,252,1,192,252,1,192,252,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,
  // 0x03b8  θ
  18,30,90,24,3,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,255,255,192,255,255,192,255,255,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,3,240,0,3,240,0,3,240,0,
  // 0x03b9  ι
  12,24,48,24,6,0,252,0,252,0,252,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,3,240,3,240,3,240,
  // 0x03ba  κ
  15,24,48,24,6,0,224,14,224,14,224,14,224,112,224,112,224,112,227,128,227,128,227,128,252,0,252,0,252,0,252,0,252,0,252,0,227,128,227,128,227,128,224,112,224,112,224,112,224,14,224,14,224,14,
  // 0x03bb  λ
  18,30,90,24,3,0,28,0,0,28,0,0,28,0,0,28,0,0,28,0,0,28,0,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,0,112,0,0,112,0,0,112,0,3,240,0,3,240,0,3,240,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,
  // 0x03bc  μ
  18,30,90,24,3,250,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,252,15,192,252,15,192,252,15,192,252,15,192,252,15,192,252,15,192,227,241,192,227,241,192,227,241,192,224,1,192,224,1,192,224,1,192,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x03bd  ν
  18,24,72,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,112,0,224,112,0,224,112,0,227,128,0,227,128,0,227,128,0,252,0,0,252,0,0,252,0,0,
  // 0x03be  ξ
  18,36,108,24,3,250,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,31,254,0,31,254,0,31,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,31,254,0,31,254,0,31,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,31,254,0,31,254,0,31,254,0,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,31,254,0,31,254,0,31,254,0,
  // 0x03bf  ο
  18,24,72,24,3,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x03c0  π
  18,24,72,24,3,0,255,255,192,255,255,192,255,255,192,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,28,14,0,
  // 0x03c1  ρ
  18,30,90,24,3,250,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,252,1,192,252,1,192,252,1,192,227,254,0,227,254,0,227,254,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,
  // 0x03c2  ς
  18,30,90,24,3,250,3,255,192,3,255,192,3,255,192,28,0,0,28,0,0,28,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,224,0,0,28,0,0,28,0,0,28,0,0,3,254,0,3,254,0,3,254,0,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,0,1,192,3,254,0,3,254,0,3,254,0,
  // 0x03c3  σ
  21,24,72,24,3,0,31,255,248,31,255,248,31,255,248,224,112,0,224,112,0,224,112,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,224,14,0,31,240,0,31,240,0,31,240,0,
  // 0x03c4  τ
  18,24,72,24,3,0,255,255,192,255,255,192,255,255,192,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,3,128,0,0,126,0,0,126,0,0,126,0,
  // 0x03c5  υ
  18,24,72,24,3,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x03c6  φ
  21,30,90,24,3,250,28,15,192,28,15,192,28,15,192,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,31,255,192,31,255,192,31,255,192,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x03c7  χ
  24,33,99,24,0,250,252,0,7,252,0,7,252,0,7,3,128,7,3,128,7,3,128,7,3,128,56,3,128,56,3,128,56,0,112,56,0,112,56,0,112,56,0,113,192,0,113,192,0,113,192,0,126,0,0,126,0,0,126,0,3,142,0,3,142,0,3,142,0,28,14,0,28,14,0,28,14,0,28,1,192,28,1,192,28,1,192,224,1,192,224,1,192,224,1,192,224,0,63,224,0,63,224,0,63,
  // 0x03c8  ψ
  21,30,90,24,3,250,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,31,255,192,31,255,192,31,255,192,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,0,112,0,
  // 0x03c9  ω
  21,24,72,24,3,0,28,1,192,28,1,192,28,1,192,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,31,143,192,31,143,192,31,143,192,
  // 0x03ca  ϊ
  255,
  // 0x03cb  ϋ
  255,
  // 0x03cc  ό
  18,39,117,24,3,0,0,14,0,0,14,0,0,14,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,254,0,31,254,0,31,254,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x03cd  ύ
  18,39,117,24,3,0,0,14,0,0,14,0,0,14,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,224,1,192,31,254,0,31,254,0,31,254,0,
  // 0x03ce  ώ
  21,39,117,24,3,0,0,14,0,0,14,0,0,14,0,0,112,0,0,112,0,0,112,0,3,128,0,3,128,0,3,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,1,192,28,1,192,28,1,192,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,0,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,224,112,56,31,143,192,31,143,192,31,143,192,
};

#endif // HAS_GRAPHICAL_TFT