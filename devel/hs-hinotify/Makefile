# $OpenBSD: Makefile,v 1.18 2015/09/19 08:13:23 kili Exp $

COMMENT =		inotify lib for haskell

DISTNAME =		hinotify-0.3.8.1
CATEGORIES =		devel

# BSD3
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/ghc

MODGHC_BUILD =		cabal hackage haddock register

MODGHC_PACKAGE_KEY =	B0v3H0Vm64OHnCEHWqVKIf

MODGHC_SETUP_CONF_ARGS +=	--extra-include-dirs=${LOCALBASE}/include/inotify/ \
				--extra-lib-dirs=${LOCALBASE}/lib/inotify/

LIB_DEPENDS = devel/libinotify

NO_TEST = Yes

.include <bsd.port.mk>
