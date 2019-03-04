/**
* pbforwarder API
* pbforwarder API generated from pbforwarder.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


// These methods have a default implementation. Your are free to keep it or add your own


#include "../Pbforwarder.h"



std::shared_ptr<Ports> Pbforwarder::getPorts(const std::string &name){
  return Ports::getEntry(*this, name);
}

std::vector<std::shared_ptr<Ports>> Pbforwarder::getPortsList(){
  return Ports::get(*this);
}

void Pbforwarder::addPorts(const std::string &name, const PortsJsonObject &conf){
  Ports::create(*this, name, conf);
}

void Pbforwarder::addPortsList(const std::vector<PortsJsonObject> &conf){
  for(auto &i : conf){
    std::string name_ = i.getName();
    Ports::create(*this, name_,  i);
  }
}

void Pbforwarder::replacePorts(const std::string &name, const PortsJsonObject &conf){
  Ports::removeEntry(*this, name);
  std::string name_ = conf.getName();
  Ports::create(*this, name_, conf);

}

void Pbforwarder::delPorts(const std::string &name){
  Ports::removeEntry(*this, name);
}

void Pbforwarder::delPortsList(){
  Ports::remove(*this);
}

std::shared_ptr<Rules> Pbforwarder::getRules(const uint32_t &id){
  return Rules::getEntry(*this, id);
}

std::vector<std::shared_ptr<Rules>> Pbforwarder::getRulesList(){
  return Rules::get(*this);
}

void Pbforwarder::addRules(const uint32_t &id, const RulesJsonObject &conf){
  Rules::create(*this, id, conf);
}

void Pbforwarder::addRulesList(const std::vector<RulesJsonObject> &conf){
  for(auto &i : conf){
    uint32_t id_ = i.getId();
    Rules::create(*this, id_,  i);
  }
}

void Pbforwarder::replaceRules(const uint32_t &id, const RulesJsonObject &conf){
  Rules::removeEntry(*this, id);
  uint32_t id_ = conf.getId();
  Rules::create(*this, id_, conf);

}

void Pbforwarder::delRules(const uint32_t &id){
  Rules::removeEntry(*this, id);
}

void Pbforwarder::delRulesList(){
  Rules::remove(*this);
}



