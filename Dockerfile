FROM centos:centos7

MAINTAINER wmetaw

# gcc
RUN yum -y install gcc

# sar
RUN yum install -y sysstat

# sources
ADD work/ /usr/local/src/
