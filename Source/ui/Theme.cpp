#include "Theme.h"
namespace huh {
juce::Colour Theme::bg()        { return juce::Colour (0xff8d9a7c); }
juce::Colour Theme::bgDark()    { return juce::Colour (0xff76826a); }
juce::Colour Theme::text()      { return juce::Colour (0xff3c4334); }
juce::Colour Theme::textDim()   { return juce::Colour (0xff5b6450); }
juce::Colour Theme::accentRed() { return juce::Colour (0xffe02424); }
juce::Colour Theme::grid()      { return juce::Colour (0x40ffffff); }
juce::Colour Theme::cream()     { return juce::Colour (0xffd7dccc); }
juce::Colour Theme::divider()   { return juce::Colour (0xff6e7860); }
juce::Colour Theme::vuGreen()   { return juce::Colour (0xff2fe02f); }
juce::Colour Theme::vuTrack()   { return juce::Colour (0xff1d2417); }
juce::Font   Theme::logoFont()  { return juce::Font (34.f, juce::Font::bold); }
juce::Font   Theme::uiFont (float h) { return juce::Font (h); }
Theme::MinimalComboLAF& Theme::comboLAF() { static MinimalComboLAF l; return l; }
} // namespace huh