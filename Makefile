# Copyright (c) Microsoft Corporation.
# Licensed under the MIT license.

#===============================================================================
# Default Paths
#===============================================================================

export PREFIX ?= $(HOME)
export PKG_CONFIG_PATH ?= $(shell find $(PREFIX)/lib/ -name '*pkgconfig*' -type d | xargs | sed -e 's/\s/:/g')

#===============================================================================
# Toolchain Configuration
#===============================================================================

# Rust Toolchain
export BUILD ?= --release
export CARGO ?= $(HOME)/.cargo/bin/cargo

#===============================================================================

all: all-libs all-tests

all-libs: check-fmt
	$(CARGO) build $(BUILD)

all-tests: check-fmt
	$(CARGO) build --tests $(BUILD)

check-fmt: check-fmt-rust

check-fmt-rust:
	$(CARGO) fmt -- --check

clean:
	$(CARGO) clean
