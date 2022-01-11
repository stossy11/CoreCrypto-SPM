//
//  ccsrp.c
//
//
//  Created by MartinLau on 09/04/2021.
//

#include "ccsrp.h"

cc_unit *srp_ccn(void *srp) {
  // Memory layout of ccsrp_ctx changed between iOS 13/macOS 10.15 and iOS
  // 14/macOS 11. Dynamically cast to correct memory layout to ensure we access
  // valid memory.
  return SRP_CCN((ccsrp_ctx_t)(srp));
}