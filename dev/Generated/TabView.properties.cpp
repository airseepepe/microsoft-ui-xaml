// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TabView.h"

CppWinRTActivatableClassWithDPFactory(TabView)

GlobalDependencyProperty TabViewProperties::s_TabWidthModeProperty{ nullptr };

TabViewProperties::TabViewProperties()
{
    EnsureProperties();
}

void TabViewProperties::EnsureProperties()
{
    if (!s_TabWidthModeProperty)
    {
        s_TabWidthModeProperty =
            InitializeDependencyProperty(
                L"TabWidthMode",
                winrt::name_of<winrt::TabViewWidthMode>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::TabViewWidthMode>::BoxValueIfNecessary(winrt::TabViewWidthMode::SizeToContent),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void TabViewProperties::ClearProperties()
{
    s_TabWidthModeProperty = nullptr;
}

void TabViewProperties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnPropertyChanged(args);
}

void TabViewProperties::TabWidthMode(winrt::TabViewWidthMode const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabWidthModeProperty, ValueHelper<winrt::TabViewWidthMode>::BoxValueIfNecessary(value));
}

winrt::TabViewWidthMode TabViewProperties::TabWidthMode()
{
    return ValueHelper<winrt::TabViewWidthMode>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabWidthModeProperty));
}
