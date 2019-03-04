/**
* simplebridge API
* simplebridge API generated from simplebridge.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* SimplebridgeApiImpl.h
*
*
*/

#pragma once


#include <memory>
#include <map>
#include <mutex>
#include "../Simplebridge.h"

#include "FdbJsonObject.h"
#include "FdbEntryJsonObject.h"
#include "FdbFlushOutputJsonObject.h"
#include "PortsJsonObject.h"
#include "SimplebridgeJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

namespace SimplebridgeApiImpl {
  void create_simplebridge_by_id(const std::string &name, const SimplebridgeJsonObject &value);
  void create_simplebridge_fdb_by_id(const std::string &name, const FdbJsonObject &value);
  void create_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address, const FdbEntryJsonObject &value);
  void create_simplebridge_fdb_entry_list_by_id(const std::string &name, const std::vector<FdbEntryJsonObject> &value);
  FdbFlushOutputJsonObject create_simplebridge_fdb_flush_by_id(const std::string &name);
  void create_simplebridge_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void create_simplebridge_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void delete_simplebridge_by_id(const std::string &name);
  void delete_simplebridge_fdb_by_id(const std::string &name);
  void delete_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address);
  void delete_simplebridge_fdb_entry_list_by_id(const std::string &name);
  void delete_simplebridge_ports_by_id(const std::string &name, const std::string &portsName);
  void delete_simplebridge_ports_list_by_id(const std::string &name);
  SimplebridgeJsonObject read_simplebridge_by_id(const std::string &name);
  uint32_t read_simplebridge_fdb_aging_time_by_id(const std::string &name);
  FdbJsonObject read_simplebridge_fdb_by_id(const std::string &name);
  uint32_t read_simplebridge_fdb_entry_age_by_id(const std::string &name, const std::string &address);
  FdbEntryJsonObject read_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address);
  std::vector<FdbEntryJsonObject> read_simplebridge_fdb_entry_list_by_id(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_simplebridge_fdb_entry_list_by_id_get_list(const std::string &name);
  std::string read_simplebridge_fdb_entry_port_by_id(const std::string &name, const std::string &address);
  std::vector<SimplebridgeJsonObject> read_simplebridge_list_by_id();
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_simplebridge_list_by_id_get_list();
  PortsJsonObject read_simplebridge_ports_by_id(const std::string &name, const std::string &portsName);
  std::vector<PortsJsonObject> read_simplebridge_ports_list_by_id(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_simplebridge_ports_list_by_id_get_list(const std::string &name);
  std::string read_simplebridge_ports_mac_by_id(const std::string &name, const std::string &portsName);
  void replace_simplebridge_by_id(const std::string &name, const SimplebridgeJsonObject &value);
  void replace_simplebridge_fdb_by_id(const std::string &name, const FdbJsonObject &value);
  void replace_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address, const FdbEntryJsonObject &value);
  void replace_simplebridge_fdb_entry_list_by_id(const std::string &name, const std::vector<FdbEntryJsonObject> &value);
  void replace_simplebridge_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void replace_simplebridge_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void update_simplebridge_by_id(const std::string &name, const SimplebridgeJsonObject &value);
  void update_simplebridge_fdb_aging_time_by_id(const std::string &name, const uint32_t &value);
  void update_simplebridge_fdb_by_id(const std::string &name, const FdbJsonObject &value);
  void update_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address, const FdbEntryJsonObject &value);
  void update_simplebridge_fdb_entry_list_by_id(const std::string &name, const std::vector<FdbEntryJsonObject> &value);
  void update_simplebridge_fdb_entry_port_by_id(const std::string &name, const std::string &address, const std::string &value);
  void update_simplebridge_list_by_id(const std::vector<SimplebridgeJsonObject> &value);
  void update_simplebridge_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void update_simplebridge_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
}
}
}
}
}

