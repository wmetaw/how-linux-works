# Usage

```
$ cd $HOME/work
$ git clone git@github.com:wmetaw/how-linux-works.git
$ cd how-linux-works
$ mkdir work
$ docker build -t howlinux .

# work以下をdockerにマウント
$ docker run -v work:/usr/local/src -itd howlinux /bin/bash
=> <CONTAINER ID>

$ docker attach <CONTAINER ID>

# src
$ cd /usr/local/src/
```
