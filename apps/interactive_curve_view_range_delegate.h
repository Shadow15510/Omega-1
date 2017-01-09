#ifndef APPS_INTERACTIVE_CURVE_VIEW_DELEGATE_H
#define APPS_INTERACTIVE_CURVE_VIEW_DELEGATE_H

class InteractiveCurveViewRange;

class InteractiveCurveViewRangeDelegate {
public:
  virtual bool didChangeRange(InteractiveCurveViewRange * interactiveCurveViewRange) = 0;
};

#endif
