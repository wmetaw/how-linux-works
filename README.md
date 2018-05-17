# USAGE

```
$ cd $HOME/work
$ git clone git@github.com:wmetaw/how-linux-works.git
$ mkdir work
$ docker image pull wmetaw/normallinux 
$ docker run -v $HOME/work/how-linux-works/work:/usr/local/src -d wmetaw/normallinux
$ docker attach <CONTAINER ID>
```
