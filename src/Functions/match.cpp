#include "FunctionsStringSearch.h"
#include "FunctionFactory.h"
#include "MatchImpl.h"


namespace DB
{
namespace
{

struct NameMatch
{
    static constexpr auto name = "match";
};

using FunctionMatch = FunctionsStringSearch<MatchImpl<false>, NameMatch>;

}

REGISTER_FUNCTION(Match)
{
    factory.registerFunction<FunctionMatch>();
}

}
