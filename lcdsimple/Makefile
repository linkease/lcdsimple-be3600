#
# Copyright (C)
#

include $(TOPDIR)/rules.mk

PKG_NAME:=lcdsimple
PKG_VERSION:=1.0.5

include $(INCLUDE_DIR)/package.mk
include $(INCLUDE_DIR)/host-build.mk
include $(INCLUDE_DIR)/cmake.mk

define Package/$(PKG_NAME)
	SECTION:=utils
	CATEGORY:=Utilities
	TITLE:=Simple monitor screen
	DEPENDS:=+libfreetype +libpthread +libdrm +libstdcpp
endef

define Package/$(PKG_NAME)/description
	Simple monitor screen
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src-glinet-be3600/* $(PKG_BUILD_DIR)/
endef

TARGET_CFLAGS += -I./ -I"$(STAGING_DIR)/usr/include/freetype2"
TARGET_LDFLAGS += -lfreetype -ldrm
MAKE_FLAGS += FPIC="$(FPIC)"

define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/usr/sbin $(1)/etc/assets $(1)/etc/config $(1)/etc/init.d $(1)/etc/uci-defaults
	$(INSTALL_BIN) ./files/lcdsimple.init $(1)/etc/init.d/lcdsimple
	$(INSTALL_BIN) ./files/lcdsimple.config $(1)/etc/config/lcdsimple
	$(INSTALL_BIN) ./files/lcdsimple.uci-default $(1)/etc/uci-defaults/lcdsimple
	$(CP) ./files/assets/* $(1)/etc/assets/
endef

$(eval $(call BuildPackage,$(PKG_NAME)))

