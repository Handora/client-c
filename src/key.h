// Copyright 2018 PingCAP, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PINGCAP_TIKV_CLIENT_C_KEY_H_
#define PINGCAP_TIKV_CLIENT_C_KEY_H_

#include <string>

namespace pingcap {
namespace tikv {
class Key {
public:
  explicit Key(std::string const& data)
    : data_(data) {}
private:
  std::string data_;
};
}  // namespace tikv
}  // namespace pingcap

#endif  // PINGCAP_TIKV_CLIENT_C_KEY_H_
