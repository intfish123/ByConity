#include "FunctionsMultiStringFuzzySearch.h"
#include "FunctionFactory.h"
#include "MultiMatchAllIndicesImpl.h"


namespace DB
{
namespace
{

struct NameMultiFuzzyMatchAllIndices
{
    static constexpr auto name = "multiFuzzyMatchAllIndices";
};

using FunctionMultiFuzzyMatchAllIndices = FunctionsMultiStringFuzzySearch<
    MultiMatchAllIndicesImpl<UInt64, true>,
    NameMultiFuzzyMatchAllIndices,
    std::numeric_limits<UInt32>::max()>;

}

REGISTER_FUNCTION(MultiFuzzyMatchAllIndices)
{
    factory.registerFunction<FunctionMultiFuzzyMatchAllIndices>();
}

}
