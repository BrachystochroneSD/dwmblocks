# Maintainer: Samuel Dawant <samueld@mailo.com>
pkgname=zenowl-dwmblocks
pkgver=1.0
pkgrel=1
pkgdesc="zenowl version of dwmblocks"
arch=(x86_64)
url="git@github.com:BrachystochroneSD/dwmblocks.git"
license=('GPL')
provides=(st)
source=(
  config.h
  main.c
  Makefile
)
sha256sums=('902de8f0fd40a0a5d8f7b6183d06445b73c73b58d7908fe8cedeaf0bcd30fbe2'
            '7bff705665c0e452a60ca0bc6b7bf788f80ffb0ce961d9e273825d9f9d1944e3'
            '4df47048c5fec01d1c65d378a8e65e934a84d308ae0f46dbd21d1c619442bf3a')

build() {
    make
}

package() {
    make DESTDIR="$pkgdir/" install
}
