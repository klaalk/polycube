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

/*
* RuleMasqueradeJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  RuleMasqueradeJsonObject : public JsonObjectBase {
public:
  RuleMasqueradeJsonObject();
  RuleMasqueradeJsonObject(const nlohmann::json &json);
  ~RuleMasqueradeJsonObject() final = default;

  /////////////////////////////////////////////
  /// JsonObjectBase overrides

  nlohmann::json toJson() const final;

  static nlohmann::json helpKeys();
  static nlohmann::json helpElements();
  static nlohmann::json helpWritableLeafs();
  static nlohmann::json helpComplexElements();
  static std::vector<std::string> helpActions();
  /////////////////////////////////////////////
  /// RuleMasqueradeJsonObject members

  /// <summary>
  ///
  /// </summary>
  bool getEnabled() const;
  void setEnabled(bool value);
  bool enabledIsSet() const;
  void unsetEnabled();

private:
  bool m_enabled;
  bool m_enabledIsSet;
};

}
}
}
}

