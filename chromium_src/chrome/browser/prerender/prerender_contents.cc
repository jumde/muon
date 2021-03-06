// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/prerender/prerender_contents.h"

#include <stddef.h>

#include "build/build_config.h"
#include "components/history/core/browser/history_types.h"

namespace prerender {

void PrerenderContents::DidNavigate(
    const history::HistoryAddPageArgs& add_page_args) {}

}  // namespace prerender
