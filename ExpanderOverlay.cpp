// Copyright (c) 2023 Institute of Software, Chinese Academy of Sciences
// libripple is licensed under Mulan PSL v2.
// You can use this software according to the terms and conditions of the Mulan PSL v2.
// You may obtain a copy of Mulan PSL v2 at:
//          http://license.coscl.org.cn/MulanPSL2
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
// EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
// MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
// See the Mulan PSL v2 for more details.

#include "ExpanderOverlay.h"

namespace Ripple {
    ExpanderOverlay::ExpanderOverlay() {

    }

    ExpanderOverlay::~ExpanderOverlay() {

    }


    void ExpanderOverlay::BuildOverlay(std::vector<NodeMetadata *> nodeList) {

    }

    std::vector<NodeMetadata *>
    ExpanderOverlay::CalculateNodesToSync(AbstractMessage *message, NodeMetadata *source, NodeMetadata *current) {
        return std::vector<NodeMetadata *>();
    }

    std::vector<NodeMetadata *> ExpanderOverlay::CalculateNodesToCollectAck(AbstractMessage *message) {
        return std::vector<NodeMetadata *>();
    }
} // Ripple