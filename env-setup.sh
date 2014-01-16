#!/bin/bash

INSTALL_DIR=`pwd`/gmock
INC_DIR=$INSTALL_DIR/include
LIB_DIR=$INSTALL_DIR/lib
GMOCK_VERSION=1.7.0
TMP_DIR=gmock_build_dir

if [ -f $INSTALL_DIR/lib/libgmock.a ]
then
    echo "gmock seems to be already built"
    exit 0
fi

echo "Building gmock..."

mkdir $TMP_DIR
cd $TMP_DIR

rm -rf $INSTALL_DIR
mkdir $INSTALL_DIR
mkdir $INC_DIR
mkdir $LIB_DIR

# install
wget http://googlemock.googlecode.com/files/gmock-$GMOCK_VERSION.zip
unzip -o gmock-$GMOCK_VERSION.zip

gmock_dir=./gmock-$GMOCK_VERSION
gtest_dir=$gmock_dir/gtest

cp -r $gmock_dir/include/gmock $INC_DIR/
cp -r $gtest_dir/include/gtest $INC_DIR/

flags="-I${gtest_dir}/include -I${gtest_dir} -I${gmock_dir}/include -I${gmock_dir}"
clang++ $flags -c ${gtest_dir}/src/gtest-all.cc
clang++ $flags -c ${gtest_dir}/src/gtest_main.cc
clang++ $flags -c ${gmock_dir}/src/gmock-all.cc

ar -rv $LIB_DIR/libgmock.a gtest-all.o gmock-all.o
ar -rv $LIB_DIR/libgtest.a gtest-all.o
ar -rv $LIB_DIR/libgtest_main.a gtest_main.o

ranlib $LIB_DIR/libgmock.a $LIB_DIR/libgtest.a $LIB_DIR/libgtest_main.a

cd ../
rm -rf $TMP_DIR
