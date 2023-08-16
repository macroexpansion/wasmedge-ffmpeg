// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2023 Second State INC

#pragma once

#include "runtime/instance/module.h"

#include "ffmpeg_env.h"

namespace WasmEdge {
namespace Host {

class WasmEdgeFfmpegModule : public Runtime::Instance::ModuleInstance {
public:
  WasmEdgeFfmpegModule();

  WasmEdgeFfmpegEnvironment& get_env() {
    return env;
  }

private:
  WasmEdgeFfmpegEnvironment env;
};

} // namespace Host
} // namespace WasmEdge
