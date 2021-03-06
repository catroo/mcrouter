/*
 *  Copyright (c) 2017, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <array>

#include <folly/Range.h>
#include <folly/dynamic.h>

namespace facebook {
namespace memcache {

struct MemcacheRouterStatsConfig {
  static constexpr size_t kNumRequestGroups = 6;
  static constexpr std::array<folly::StringPiece, 1 * kNumRequestGroups>
      sumStatNames{{folly::StringPiece("cmd_delete_count"),
                    folly::StringPiece("cmd_get_count"),
                    folly::StringPiece("cmd_lease_get_count"),
                    folly::StringPiece("cmd_lease_set_count"),
                    folly::StringPiece("cmd_set_count"),
                    folly::StringPiece("cmd_other_count")}};
  static constexpr std::array<folly::StringPiece, 3 * kNumRequestGroups>
      rateStatNames{{folly::StringPiece("cmd_delete"),
                     folly::StringPiece("cmd_get"),
                     folly::StringPiece("cmd_lease_get"),
                     folly::StringPiece("cmd_lease_set"),
                     folly::StringPiece("cmd_set"),
                     folly::StringPiece("cmd_other"),
                     folly::StringPiece("cmd_delete_out"),
                     folly::StringPiece("cmd_get_out"),
                     folly::StringPiece("cmd_lease_get_out"),
                     folly::StringPiece("cmd_lease_set_out"),
                     folly::StringPiece("cmd_set_out"),
                     folly::StringPiece("cmd_other_out"),
                     folly::StringPiece("cmd_delete_out_all"),
                     folly::StringPiece("cmd_get_out_all"),
                     folly::StringPiece("cmd_lease_get_out_all"),
                     folly::StringPiece("cmd_lease_set_out_all"),
                     folly::StringPiece("cmd_set_out_all"),
                     folly::StringPiece("cmd_other_out_all")}};

  template <class Request>
  static constexpr size_t getStatGroup();
};

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McAddRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McAppendRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McCasRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McDecrRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McDeleteRequest>() {
  return 0; // stat group 'delete'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McFlushAllRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McFlushReRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McGetRequest>() {
  return 1; // stat group 'get'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McGetsRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McIncrRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McLeaseGetRequest>() {
  return 2; // stat group 'lease_get'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McLeaseSetRequest>() {
  return 3; // stat group 'lease_set'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McMetagetRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McPrependRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McReplaceRequest>() {
  return 5; // stat group 'other'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McSetRequest>() {
  return 4; // stat group 'set'
}

template <>
inline constexpr size_t
MemcacheRouterStatsConfig::getStatGroup<McTouchRequest>() {
  return 5; // stat group 'other'
}

} // memcache
} // facebook
