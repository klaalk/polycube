/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "GlobalheaderJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

GlobalheaderJsonObject::GlobalheaderJsonObject() {
  m_magicIsSet = false;
  m_versionMajorIsSet = false;
  m_versionMinorIsSet = false;
  m_thiszoneIsSet = false;
  m_sigfigsIsSet = false;
  m_snaplenIsSet = false;
  m_linktypeIsSet = false;
}

GlobalheaderJsonObject::GlobalheaderJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_magicIsSet = false;
  m_versionMajorIsSet = false;
  m_versionMinorIsSet = false;
  m_thiszoneIsSet = false;
  m_sigfigsIsSet = false;
  m_snaplenIsSet = false;
  m_linktypeIsSet = false;


  if (val.count("magic")) {
    setMagic(val.at("magic").get<uint32_t>());
  }

  if (val.count("version_major")) {
    setVersionMajor(val.at("version_major").get<uint16_t>());
  }

  if (val.count("version_minor")) {
    setVersionMinor(val.at("version_minor").get<uint16_t>());
  }

  if (val.count("thiszone")) {
    setThiszone(val.at("thiszone").get<int32_t>());
  }

  if (val.count("sigfigs")) {
    setSigfigs(val.at("sigfigs").get<uint32_t>());
  }

  if (val.count("snaplen")) {
    setSnaplen(val.at("snaplen").get<uint32_t>());
  }

  if (val.count("linktype")) {
    setLinktype(val.at("linktype").get<uint32_t>());
  }
}

nlohmann::json GlobalheaderJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_magicIsSet) {
    val["magic"] = m_magic;
  }

  if (m_versionMajorIsSet) {
    val["version_major"] = m_versionMajor;
  }

  if (m_versionMinorIsSet) {
    val["version_minor"] = m_versionMinor;
  }

  if (m_thiszoneIsSet) {
    val["thiszone"] = m_thiszone;
  }

  if (m_sigfigsIsSet) {
    val["sigfigs"] = m_sigfigs;
  }

  if (m_snaplenIsSet) {
    val["snaplen"] = m_snaplen;
  }

  if (m_linktypeIsSet) {
    val["linktype"] = m_linktype;
  }

  return val;
}

uint32_t GlobalheaderJsonObject::getMagic() const {
  return m_magic;
}

void GlobalheaderJsonObject::setMagic(uint32_t value) {
  m_magic = value;
  m_magicIsSet = true;
}

bool GlobalheaderJsonObject::magicIsSet() const {
  return m_magicIsSet;
}

void GlobalheaderJsonObject::unsetMagic() {
  m_magicIsSet = false;
}

uint16_t GlobalheaderJsonObject::getVersionMajor() const {
  return m_versionMajor;
}

void GlobalheaderJsonObject::setVersionMajor(uint16_t value) {
  m_versionMajor = value;
  m_versionMajorIsSet = true;
}

bool GlobalheaderJsonObject::versionMajorIsSet() const {
  return m_versionMajorIsSet;
}

void GlobalheaderJsonObject::unsetVersionMajor() {
  m_versionMajorIsSet = false;
}

uint16_t GlobalheaderJsonObject::getVersionMinor() const {
  return m_versionMinor;
}

void GlobalheaderJsonObject::setVersionMinor(uint16_t value) {
  m_versionMinor = value;
  m_versionMinorIsSet = true;
}

bool GlobalheaderJsonObject::versionMinorIsSet() const {
  return m_versionMinorIsSet;
}

void GlobalheaderJsonObject::unsetVersionMinor() {
  m_versionMinorIsSet = false;
}

int32_t GlobalheaderJsonObject::getThiszone() const {
  return m_thiszone;
}

void GlobalheaderJsonObject::setThiszone(int32_t value) {
  m_thiszone = value;
  m_thiszoneIsSet = true;
}

bool GlobalheaderJsonObject::thiszoneIsSet() const {
  return m_thiszoneIsSet;
}

void GlobalheaderJsonObject::unsetThiszone() {
  m_thiszoneIsSet = false;
}

uint32_t GlobalheaderJsonObject::getSigfigs() const {
  return m_sigfigs;
}

void GlobalheaderJsonObject::setSigfigs(uint32_t value) {
  m_sigfigs = value;
  m_sigfigsIsSet = true;
}

bool GlobalheaderJsonObject::sigfigsIsSet() const {
  return m_sigfigsIsSet;
}

void GlobalheaderJsonObject::unsetSigfigs() {
  m_sigfigsIsSet = false;
}

uint32_t GlobalheaderJsonObject::getSnaplen() const {
  return m_snaplen;
}

void GlobalheaderJsonObject::setSnaplen(uint32_t value) {
  m_snaplen = value;
  m_snaplenIsSet = true;
}

bool GlobalheaderJsonObject::snaplenIsSet() const {
  return m_snaplenIsSet;
}

void GlobalheaderJsonObject::unsetSnaplen() {
  m_snaplenIsSet = false;
}

uint32_t GlobalheaderJsonObject::getLinktype() const {
  return m_linktype;
}

void GlobalheaderJsonObject::setLinktype(uint32_t value) {
  m_linktype = value;
  m_linktypeIsSet = true;
}

bool GlobalheaderJsonObject::linktypeIsSet() const {
  return m_linktypeIsSet;
}

void GlobalheaderJsonObject::unsetLinktype() {
  m_linktypeIsSet = false;
}


}
}
}

