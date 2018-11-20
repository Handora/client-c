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

#ifndef PINGCAP_TIKV_CLIENT_C_SNAPSHOT_H_
#define PINGCAP_TIKV_CLIENT_C_SNAPSHOT_H_

#include <string>

#include "key.h"

namespace pingcap {
namespace tikv {
class Snapshot {
public:
  virtual ~Snapshot() = default;

  /**
   * Gets the Value for key from kv store
   */
  virtual std::string Get(Key const& key) const = 0;
};

class TikvSnapshot: public Snapshot {
public:
  explicit TikvSnapshot() {
    
  }
private:
  TikvStore store;
  Version version;
  
}
}  // namespace tikv
}  // namespace pingcap

#endif  // PINGCAP_TIKV_CLIENT_C_SNAPSHOT_H_
