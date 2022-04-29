Rust Bindings for Liburing
==========================

[![Join us on Slack!](https://img.shields.io/badge/chat-on%20Slack-e01563.svg)](https://join.slack.com/t/demikernel/shared_invite/zt-11i6lgaw5-HFE_IAls7gUX3kp1XSab0g)
[![Build](https://github.com/demikernel/liburing-rs/actions/workflows/build.yml/badge.svg)](https://github.com/demikernel/liburing-rs/actions/workflows/build.yml)

This repository provides Rust bindings for [Liburing](https://github.com/axboe/liburing).

This crate supports version `7ad5e52d4d2f91203615cd738e56aba10ad8b8f6` of `liburing`.

> This project is a component of Demikernel - a libOS architecture for kernel-bypass devices.

> To read more about Demikernel check out https://aka.ms/demikernel.

Building
----------

**1. Clone This Repository**
```
export WORKDIR=$HOME                                      # Change this to whatever you want.
cd $WORKDIR                                               # Switch to working directory.
git clone https://github.com/demikernel/liburing-rs.git   # Clone.
```

**2. Setup Build Environment (Optional)**

>  Set this if liburing is not installed system wide.

```
export PKG_CONFIG_PATH=/path/to/liburing/pkgconfig
```

**3. Build Rust Bindings for Liburing**
```
cd $WORKDIR/liburing-rs    # Switch to repository's source tree.
make                       # Build Rust bindings for liburing.
```

Code of Conduct
---------------

This project has adopted the [Microsoft Open Source Code of Conduct](https://opensource.microsoft.com/codeofconduct/).
For more information see the [Code of Conduct FAQ](https://opensource.microsoft.com/codeofconduct/faq/)
or contact [opencode@microsoft.com](mailto:opencode@microsoft.com) with any additional questions or comments.

Usage Statement
----------------

This project is a prototype. As such, we provide no guarantees that it will
work and you are assuming any risks with using the code. We welcome comments
and feedback. Please send any questions or comments to one of the following
maintainers of the project:

- [Irene Zhang](https://github.com/iyzhang) - [irene.zhang@microsoft.com](mailto:irene.zhang@microsoft.com)
- [Pedro Henrique Penna](https://github.com/ppenna) - [ppenna@microsoft.com](mailto:ppenna@microsoft.com)

> By sending feedback, you are consenting that it may be used  in the further
> development of this project.
