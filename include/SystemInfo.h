// Copyright (c) 2023 Institute of Software, Chinese Academy of Sciences
// libripple is licensed under Mulan PSL v2.
// You can use this software according to the terms and conditions of the Mulan PSL v2.
// You may obtain a copy of Mulan PSL v2 at:
//          http://license.coscl.org.cn/MulanPSL2
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
// EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
// MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
// See the Mulan PSL v2 for more details.

#ifndef LIBRIPPLE_SYSTEMINFO_H
#define LIBRIPPLE_SYSTEMINFO_H

namespace Ripple {
    namespace Common {
        namespace Entity {
            class SystemInfo {
            public:
                SystemInfo();

                virtual ~SystemInfo();

                SystemInfo(const SystemInfo &) = delete;

                SystemInfo &operator=(const SystemInfo &) = delete;

                double GetCpuUsage() const;

                void SetCpuUsage(double cpuUsage);

            private:
                double cpuUsage;
            };
        }
    }
}

#endif //LIBRIPPLE_SYSTEMINFO_H
