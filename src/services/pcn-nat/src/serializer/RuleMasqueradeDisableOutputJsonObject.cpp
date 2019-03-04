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



#include "RuleMasqueradeDisableOutputJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

RuleMasqueradeDisableOutputJsonObject::RuleMasqueradeDisableOutputJsonObject() {
  m_resultIsSet = false;
}

RuleMasqueradeDisableOutputJsonObject::RuleMasqueradeDisableOutputJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_resultIsSet = false;


  if (val.count("result")) {
    setResult(val.at("result").get<bool>());
  }
}

nlohmann::json RuleMasqueradeDisableOutputJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_resultIsSet) {
    val["result"] = m_result;
  }

  return val;
}

bool RuleMasqueradeDisableOutputJsonObject::getResult() const {
  return m_result;
}

void RuleMasqueradeDisableOutputJsonObject::setResult(bool value) {
  m_result = value;
  m_resultIsSet = true;
}

bool RuleMasqueradeDisableOutputJsonObject::resultIsSet() const {
  return m_resultIsSet;
}

void RuleMasqueradeDisableOutputJsonObject::unsetResult() {
  m_resultIsSet = false;
}


nlohmann::json RuleMasqueradeDisableOutputJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json RuleMasqueradeDisableOutputJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["result"]["name"] = "result";
  val["result"]["type"] = "leaf"; // Suppose that type is leaf
  val["result"]["simpletype"] = "boolean";
  val["result"]["description"] = R"POLYCUBE(True if the operation is successful)POLYCUBE";
  val["result"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RuleMasqueradeDisableOutputJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();

  val["result"]["name"] = "result";
  val["result"]["simpletype"] = "boolean";
  val["result"]["description"] = R"POLYCUBE(True if the operation is successful)POLYCUBE";
  val["result"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RuleMasqueradeDisableOutputJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

std::vector<std::string> RuleMasqueradeDisableOutputJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

}
}
}
}

