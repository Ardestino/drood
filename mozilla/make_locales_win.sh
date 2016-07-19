#!/bin/sh -e

BUILD_OFFICIAL=1

for locale in "$@"
do
  rm -rf ../objdir/dist/bin/dictionaries/*.* ../objdir/drood/installer/packages-static
  sed "s/%LOCALE%/$locale/" mozconfig-nodebug-win.in > mozconfig-nodebug-win
  ln -sf mozconfig-nodebug-win .mozconfig
  make -f client.mk build
  cd ../objdir/drood/installer/windows
  make
  cd ../../../../mozilla
done
