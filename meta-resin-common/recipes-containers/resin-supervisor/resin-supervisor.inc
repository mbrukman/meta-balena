#
# Resin supervisor bbclass
#
# Copyright (C) 2017 resin.io
# Author: Andrei Gherzan <andrei@resin.io>
#
# Licensed under the Apache-2.0 license, see COPYING.Apache-2.0 for details

# Resin supervisor supported CPU archtectures
SUPERVISOR_REPOSITORY_armv5 = "balena/armel-supervisor"
SUPERVISOR_REPOSITORY_armv6 = "balena/rpi-supervisor"
SUPERVISOR_REPOSITORY_armv7a = "balena/armv7hf-supervisor"
SUPERVISOR_REPOSITORY_armv7ve = "balena/armv7hf-supervisor"
SUPERVISOR_REPOSITORY_aarch64 = "balena/aarch64-supervisor"
SUPERVISOR_REPOSITORY_x86 = "balena/i386-supervisor"
SUPERVISOR_REPOSITORY_x86-64 = "balena/amd64-supervisor"
SUPERVISOR_REPOSITORY_intel-quark = "balena/i386-nlp-supervisor"

# Resin supervisor default tag
SUPERVISOR_TAG ?= "v8.6.3"