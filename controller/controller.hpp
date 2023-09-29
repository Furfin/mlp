#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>
#include <vector>

#include "../model/model.h"

namespace s21 {

class Controller {
public:
  Controller() { model_ = new Model(); }
  ~Controller() { delete model_; }

  bool LoadWeights(const std::string &path) {
    return model_->LoadWeights(path);
  }
  bool LoadDataSet(const string &path) { return model_->LoadDataSet(path); }
  bool SaveWeight(const std::string &path) { return model_->SaveWeights(path); }
  bool DataSetIsLoaded() { return model_->DataSetIsLoaded(); }
  bool WeightsIsLoaded() { return model_->WeightsIsLoaded(); }

  vector<Trainer::TrainingInfo> Training(bool use_random_weights,
                                         int count_of_hidden_layers,
                                         NeuralNetType type, int count_of_epoch,
                                         int k_group = 0) {
    MakeNeuralNet(use_random_weights, count_of_hidden_layers, type);
    return model_->Training(count_of_epoch, k_group);
  }

  Tester::TestingInfo AutomationTest(double part) {
    return model_->AutomationTest(part);
  }
  char ManualTest(vector<double> &data_set) {
    return model_->ManualTest(data_set);
  }

  void MakeNeuralNet(bool use_random_weights, int count_of_hidden_layers,
                     NeuralNetType type) {
    model_->MakeNeuralNet(use_random_weights, count_of_hidden_layers, type);
  }

  bool GetErrorTrain() { return model_->GetErrorTrain(); }
  bool GetErrorTest() { return model_->GetErrorTest(); }

private:
  Model *model_;
};

} // namespace s21

#endif // CONTROLLER_H
