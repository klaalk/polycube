/**
* nat API
* nat API generated from nat.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "RulePortForwardingJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

RulePortForwardingJsonObject::RulePortForwardingJsonObject() {
  m_entryIsSet = false;
}

RulePortForwardingJsonObject::RulePortForwardingJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_entryIsSet = false;


  if (val.count("entry")) {
    for (auto& item : val["entry"]) {
      RulePortForwardingEntryJsonObject newItem{ item };
      m_entry.push_back(newItem);
    }

    m_entryIsSet = true;
  }
}

nlohmann::json RulePortForwardingJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_entry) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["entry"] = jsonArray;
    }
  }

  return val;
}

const std::vector<RulePortForwardingEntryJsonObject>& RulePortForwardingJsonObject::getEntry() const{
  return m_entry;
}

void RulePortForwardingJsonObject::addRulePortForwardingEntry(RulePortForwardingEntryJsonObject value) {
  m_entry.push_back(value);
  m_entryIsSet = true;
}


bool RulePortForwardingJsonObject::entryIsSet() const {
  return m_entryIsSet;
}

void RulePortForwardingJsonObject::unsetEntry() {
  m_entryIsSet = false;
}


nlohmann::json RulePortForwardingJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json RulePortForwardingJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["entry"]["name"] = "entry";
  val["entry"]["type"] = "leaf"; // Suppose that type is leaf
  val["entry"]["type"] = "list";
  val["entry"]["description"] = R"POLYCUBE(List of port forwarding rules)POLYCUBE";
  val["entry"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RulePortForwardingJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json RulePortForwardingJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();

  val["entry"]["name"] = "entry";
  val["entry"]["type"] = "list";
  val["entry"]["description"] = R"POLYCUBE(List of port forwarding rules)POLYCUBE";
  val["entry"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

std::vector<std::string> RulePortForwardingJsonObject::helpActions() {
  std::vector<std::string> val;
  val.push_back("append");
  return val;
}

}
}
}
}

