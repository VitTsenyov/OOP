#include <iostream>
#include <string>
#include <vector>

class Database {
private:
  static Database* _singletonInstance;
  std::vector<std::string> _databaseData;
  int _dataCount;

  Database() { _dataCount = 0; }
  Database(const Database&) = delete;             // Заборона конструктора копіювання
  Database& operator=(const Database&) = delete;  // Заборона копіювання через присвоєня

public:
  static Database* GetInstance() {
    if (!_singletonInstance) _singletonInstance = new Database();
    return _singletonInstance;
  }

  void AddData(const std::string& data) {
    _databaseData.push_back(data);
    _dataCount++;
    std::cout << "Add new data to database: " << data << std::endl;
    std::cout << "Database data count: " << _dataCount << std::endl;
  }
};

Database* Database::_singletonInstance = nullptr;

void some_function() {
  Database::GetInstance()->AddData("Some function create entry...");
}

int main() {
  Database::GetInstance()->AddData("Sample Entry 1");
  Database::GetInstance()->AddData("Sample Entry 2");
  some_function();
  return 0;
}
