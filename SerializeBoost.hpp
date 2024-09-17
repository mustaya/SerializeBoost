//
// Created by mustafayanikdorugu on 17.09.2024.
//

#pragma once

#include <cstddef>
#include <boost/asio.hpp>

namespace drivers {

    class SerializeBoost {
    public:
        // Default Constructor.
        SerializeBoost() = delete;

        // Default Copy Constructor.
        SerializeBoost(const SerializeBoost &) = delete;

        // Default Move Constructor.
        SerializeBoost(SerializeBoost &&) = delete;

        // Default Copy Assignment Operator.
        SerializeBoost &operator=(const SerializeBoost &) = delete;

        // Default Move Assignment Operator.
        SerializeBoost &operator=(SerializeBoost &&) = delete;

        // Default Destructor.
        ~SerializeBoost() = default;

        auto open() -> bool {}
        auto read() -> std::size_t {}
        auto write() -> std::size_t {}

    private:

        boost::asio::io_service m_io_service;
        boost::asio::serial_port m_serial{m_io_service};
    };
}
