/**
* k8switch API
* k8switch API generated from k8switch.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* PortsJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {

enum class PortsTypeEnum {
  DEFAULT, NODEPORT
};

/// <summary>
///
/// </summary>
class  PortsJsonObject : public JsonObjectBase {
public:
  PortsJsonObject();
  PortsJsonObject(const nlohmann::json &json);
  ~PortsJsonObject() final = default;

  /////////////////////////////////////////////
  /// JsonObjectBase overrides

  nlohmann::json toJson() const final;

  static nlohmann::json helpKeys();
  static nlohmann::json helpElements();
  static nlohmann::json helpWritableLeafs();
  static nlohmann::json helpComplexElements();
  static std::vector<std::string> helpActions();
  /////////////////////////////////////////////
  /// PortsJsonObject members

  /// <summary>
  /// Port Name
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;

  /// <summary>
  /// Type of the LB port (e.g. NODEPORT or DEFAULT)
  /// </summary>
  PortsTypeEnum getType() const;
  void setType(PortsTypeEnum value);
  bool typeIsSet() const;
  void unsetType();
  static std::string PortsTypeEnum_to_string(const PortsTypeEnum &value);
  static PortsTypeEnum string_to_PortsTypeEnum(const std::string &str);

private:
  std::string m_name;
  bool m_nameIsSet;
  PortsTypeEnum m_type;
  bool m_typeIsSet;
};

}
}
}
}

