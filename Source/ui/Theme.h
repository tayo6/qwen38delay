#pragma once
#include <juce_gui_basics/juce_gui_basics.h>
namespace huh {
struct Theme {
    static juce::Colour bg();        // sage body / panels / visualizer
    static juce::Colour bgDark();    // top bar
    static juce::Colour text();      // dark olive text / dark circular btns
    static juce::Colour textDim();   // sync pill / outlines
    static juce::Colour accentRed(); // pipes + output ring
    static juce::Colour grid();      // visualizer gridlines
    static juce::Colour cream();     // preset pill, velocity box, A/B pill, undo/redo
    static juce::Colour divider();   // panel separator lines
    static juce::Colour vuGreen();   // bright meter
    static juce::Colour vuTrack();
    static juce::Font   logoFont();
    static juce::Font   uiFont (float h = 13.f);

    // invisible hit-test-only button (we draw the glyphs ourselves)
    struct GlyphButton : juce::Button { using juce::Button::Button;
        void paintButton (juce::Graphics&, bool, bool) override {} };

    // combo box that draws nothing, so we can render the cream pills ourselves
    struct MinimalComboLAF : juce::LookAndFeel_V4 {
        void drawComboBox (juce::Graphics&, int, int, bool, int, int, int, int, juce::ComboBox&) override {}
    };
    static MinimalComboLAF& comboLAF();
};
} // namespace huh