FROM centos:centos7

MAINTAINER wmetaw

# gcc
RUN yum -y install gcc

# sar
RUN yum install -y sysstat

# strace
RUN yum -y install strace

# sources
ADD work/ /usr/local/src/
