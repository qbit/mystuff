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

# Dependencies: U = Update, * = needed
# * JuicyPixels >=3.1.6.1 && <3.2,
# * SHA ==1.6.*,
# U aeson >=0.7.0.5 && <0.9,
# base64-bytestring >=0.1 && <1.1,
# blaze-html >=0.5 && <0.8,
# blaze-markup >=0.5.1 && <0.7,
# data-default >=0.4 && <0.6,
# * deepseq-generics ==0.1.*,
# * extensible-exceptions ==0.1.*,
# * haddock-library ==1.1.*,
# * highlighting-kate >=0.5.8.5 && <0.6,
# * hslua ==0.3.*,
# * pandoc-types >=1.12.4 && <1.13,
# scientific >=0.2 && <0.4,
# U tagsoup >=0.13.1 && <0.14,
# * temporary >=1.1 && <1.3,
# * texmath ==0.8.*,
# U xml >=1.3.12 && <1.4,
# * yaml >=0.8.8.2 && <0.9,
#* zip-archive >=0.2.3.4 && <0.3)

.include <bsd.port.mk>
