//
// Created by Evan Kirkiles on 6/25/18.
//

#ifndef ALGOBACKTESTER_MONTECARLO_H
#define ALGOBACKTESTER_MONTECARLO_H

#ifndef QWidget
#include <QWidget>
#endif
#ifndef QFile
#include <QFile>
#endif
#ifndef TradingInterface
#include "../Infrastructure/interface.hpp"
#endif

// Pop-up window for displaying Monte Carlo analysis
class MCWindow : public QWidget {
public:

    // Backtesting variables
    TradingInterface* interface;

    Q_OBJECT
public:
    explicit MCWindow(TradingInterface* interface, QWidget* parent = 0);

};

#endif //ALGOBACKTESTER_MONTECARLO_H