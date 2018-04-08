# Usage

```
$ cd $HOME/work
$ git clone git@github.com:wmetaw/how-linux-works.git
$ cd how-linux-works
$ mkdir work
$ docker image pull wmetaw/normallinux

# work以下をdockerにマウント
$ docker run -v $HOME/work/how-linux-works/work:/usr/local/src -itd wmetaw/normallinux /bin/bash
=> <CONTAINER ID>

$ docker attach <CONTAINER ID>
```
