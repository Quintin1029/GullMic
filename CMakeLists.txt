# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(hello_world)

include_directories(BEFORE Inc)
target_sources(app PRIVATE Src/main.c Src/microphone.c Src/pitchdetection.c Src/notes.c Src/haptic_feedback.c)
