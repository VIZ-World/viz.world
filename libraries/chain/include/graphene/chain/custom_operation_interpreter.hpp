
#pragma once

#include <memory>

namespace graphene {
    namespace schema {
        struct abstract_schema;
    }
}

namespace graphene {
    namespace protocol {
        struct custom_operation;
    }
}

namespace graphene {
    namespace chain {

        class custom_operation_interpreter {
        public:
            virtual void apply(const protocol::custom_operation &op) = 0;
        };

    }
} // graphene::chain
