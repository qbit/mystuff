# $OpenBSD: Makefile,v 1.4 2014/08/25 15:17:24 kirby Exp $

COMMENT=		convert files from one markup format into another

GH_ACCOUNT=		jgm
GH_PROJECT=		pandoc
GH_TAGNAME=		1.13.1

DISTNAME=		pandoc-${GH_TAGNAME}

CATEGORIES=		textproc

HOMEPAGE=		http://johnmacfarlane.net/pandoc/

MAINTAINER=		Aaron Bieber <abieber@openbsd.org>

# GPL
PERMIT_PACKAGE_CDROM=	Yes

MODULES=		lang/ghc
MODGHC_BUILD=		cabal

BUILD_DEPENDS =		devel/hs-aeson \
			textproc/hs-blaze-html \
			textproc/hs-blaze-markup \
			devel/hs-data-default \
			devel/hs-base64-bytestring \
			devel/hs-extensible-exceptions \
			devel/haddock \
			devel/hs-scientific \
			textproc/hs-tagsoup \
			textproc/hs-xml

.include <bsd.port.mk>
