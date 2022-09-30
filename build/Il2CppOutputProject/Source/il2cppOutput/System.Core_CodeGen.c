#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000003 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_mBF9354F0EDEE6E4BA57F3DA1663A91A5B61CEB9D (void);
// 0x00000004 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000005 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001B TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000027 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000028 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD (void);
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002A TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002E System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000030 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000032 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000033 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000034 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000036 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000047 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004A System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004C System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004F System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000050 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000051 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000054 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000055 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000056 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000057 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005A System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005D TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005F System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000060 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000061 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000064 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000066 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000067 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000068 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000069 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006A System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006D System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006F TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000070 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000071 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000072 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000073 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000074 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000075 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000076 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000079 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007B System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007D System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007E System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000007F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000080 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000082 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000083 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000084 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000085 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000086 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000087 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000088 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x00000089 System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008B TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008C System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008D System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000008E System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000008F System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000090 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000091 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000092 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000093 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000094 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000095 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000096 System.Void System.Linq.Set`1::Resize()
// 0x00000097 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000098 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000099 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009A System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009C System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000009F System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A0 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A1 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A2 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A3 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A4 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A5 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A6 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A7 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A8 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000A9 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AA System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AB System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AC System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AD System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AE TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000AF System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x000000B0 System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC (void);
// 0x000000B1 System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (void);
// 0x000000B2 System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x000000B3 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x000000B4 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x000000B5 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (void);
// 0x000000B6 System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern void UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F (void);
// 0x000000B7 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x000000B8 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x000000B9 System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (void);
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C2 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C3 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C4 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C5 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C6 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C9 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000D0 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D1 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D2 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D4 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D5 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000D6 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D7 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[215] = 
{
	SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015,
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_ArgumentOutOfRange_mBF9354F0EDEE6E4BA57F3DA1663A91A5B61CEB9D,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC,
	Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4,
	UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[215] = 
{
	6507,
	7044,
	7044,
	7350,
	7350,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6938,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4883,
	7385,
	7044,
	4919,
	4919,
	4919,
	7044,
	4919,
	-1,
	-1,
	7350,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[67] = 
{
	{ 0x02000005, { 96, 4 } },
	{ 0x02000006, { 100, 9 } },
	{ 0x02000007, { 111, 7 } },
	{ 0x02000008, { 120, 10 } },
	{ 0x02000009, { 132, 11 } },
	{ 0x0200000A, { 146, 9 } },
	{ 0x0200000B, { 158, 12 } },
	{ 0x0200000C, { 173, 1 } },
	{ 0x0200000D, { 174, 2 } },
	{ 0x0200000E, { 176, 12 } },
	{ 0x0200000F, { 188, 8 } },
	{ 0x02000010, { 196, 11 } },
	{ 0x02000011, { 207, 12 } },
	{ 0x02000012, { 219, 12 } },
	{ 0x02000013, { 231, 6 } },
	{ 0x02000014, { 237, 2 } },
	{ 0x02000016, { 239, 8 } },
	{ 0x02000018, { 247, 3 } },
	{ 0x02000019, { 252, 5 } },
	{ 0x0200001A, { 257, 7 } },
	{ 0x0200001B, { 264, 3 } },
	{ 0x0200001C, { 267, 7 } },
	{ 0x0200001D, { 274, 4 } },
	{ 0x0200002A, { 278, 3 } },
	{ 0x0200002D, { 281, 23 } },
	{ 0x0200002F, { 304, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 1 } },
	{ 0x0600000B, { 31, 2 } },
	{ 0x0600000C, { 33, 1 } },
	{ 0x0600000D, { 34, 2 } },
	{ 0x0600000E, { 36, 2 } },
	{ 0x0600000F, { 38, 2 } },
	{ 0x06000010, { 40, 1 } },
	{ 0x06000011, { 41, 1 } },
	{ 0x06000012, { 42, 2 } },
	{ 0x06000013, { 44, 1 } },
	{ 0x06000014, { 45, 2 } },
	{ 0x06000015, { 47, 1 } },
	{ 0x06000016, { 48, 2 } },
	{ 0x06000017, { 50, 3 } },
	{ 0x06000018, { 53, 2 } },
	{ 0x06000019, { 55, 1 } },
	{ 0x0600001A, { 56, 2 } },
	{ 0x0600001B, { 58, 4 } },
	{ 0x0600001C, { 62, 4 } },
	{ 0x0600001D, { 66, 4 } },
	{ 0x0600001E, { 70, 3 } },
	{ 0x0600001F, { 73, 3 } },
	{ 0x06000020, { 76, 1 } },
	{ 0x06000021, { 77, 1 } },
	{ 0x06000022, { 78, 3 } },
	{ 0x06000023, { 81, 3 } },
	{ 0x06000024, { 84, 2 } },
	{ 0x06000025, { 86, 2 } },
	{ 0x06000026, { 88, 5 } },
	{ 0x06000027, { 93, 3 } },
	{ 0x06000038, { 109, 2 } },
	{ 0x0600003D, { 118, 2 } },
	{ 0x06000042, { 130, 2 } },
	{ 0x06000048, { 143, 3 } },
	{ 0x0600004D, { 155, 3 } },
	{ 0x06000052, { 170, 3 } },
	{ 0x0600009B, { 250, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[306] = 
{
	{ (Il2CppRGCTXDataType)2, 6920 },
	{ (Il2CppRGCTXDataType)3, 26565 },
	{ (Il2CppRGCTXDataType)2, 10816 },
	{ (Il2CppRGCTXDataType)2, 10086 },
	{ (Il2CppRGCTXDataType)3, 45490 },
	{ (Il2CppRGCTXDataType)2, 7596 },
	{ (Il2CppRGCTXDataType)2, 10116 },
	{ (Il2CppRGCTXDataType)3, 45534 },
	{ (Il2CppRGCTXDataType)2, 10099 },
	{ (Il2CppRGCTXDataType)3, 45506 },
	{ (Il2CppRGCTXDataType)2, 6921 },
	{ (Il2CppRGCTXDataType)3, 26566 },
	{ (Il2CppRGCTXDataType)2, 10852 },
	{ (Il2CppRGCTXDataType)2, 10132 },
	{ (Il2CppRGCTXDataType)3, 45553 },
	{ (Il2CppRGCTXDataType)2, 7622 },
	{ (Il2CppRGCTXDataType)2, 10160 },
	{ (Il2CppRGCTXDataType)3, 45717 },
	{ (Il2CppRGCTXDataType)2, 10146 },
	{ (Il2CppRGCTXDataType)3, 45628 },
	{ (Il2CppRGCTXDataType)2, 1229 },
	{ (Il2CppRGCTXDataType)3, 166 },
	{ (Il2CppRGCTXDataType)3, 167 },
	{ (Il2CppRGCTXDataType)2, 3914 },
	{ (Il2CppRGCTXDataType)3, 16653 },
	{ (Il2CppRGCTXDataType)2, 1231 },
	{ (Il2CppRGCTXDataType)3, 180 },
	{ (Il2CppRGCTXDataType)3, 181 },
	{ (Il2CppRGCTXDataType)2, 3937 },
	{ (Il2CppRGCTXDataType)3, 16660 },
	{ (Il2CppRGCTXDataType)3, 50868 },
	{ (Il2CppRGCTXDataType)2, 1273 },
	{ (Il2CppRGCTXDataType)3, 377 },
	{ (Il2CppRGCTXDataType)3, 50874 },
	{ (Il2CppRGCTXDataType)2, 1281 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)2, 8262 },
	{ (Il2CppRGCTXDataType)3, 35966 },
	{ (Il2CppRGCTXDataType)2, 8263 },
	{ (Il2CppRGCTXDataType)3, 35967 },
	{ (Il2CppRGCTXDataType)3, 21895 },
	{ (Il2CppRGCTXDataType)3, 50806 },
	{ (Il2CppRGCTXDataType)2, 1234 },
	{ (Il2CppRGCTXDataType)3, 229 },
	{ (Il2CppRGCTXDataType)3, 50910 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)3, 436 },
	{ (Il2CppRGCTXDataType)3, 50823 },
	{ (Il2CppRGCTXDataType)2, 1262 },
	{ (Il2CppRGCTXDataType)3, 335 },
	{ (Il2CppRGCTXDataType)2, 1609 },
	{ (Il2CppRGCTXDataType)3, 3050 },
	{ (Il2CppRGCTXDataType)3, 3051 },
	{ (Il2CppRGCTXDataType)2, 7597 },
	{ (Il2CppRGCTXDataType)3, 28807 },
	{ (Il2CppRGCTXDataType)3, 50830 },
	{ (Il2CppRGCTXDataType)2, 1265 },
	{ (Il2CppRGCTXDataType)3, 349 },
	{ (Il2CppRGCTXDataType)2, 5947 },
	{ (Il2CppRGCTXDataType)2, 4228 },
	{ (Il2CppRGCTXDataType)2, 4472 },
	{ (Il2CppRGCTXDataType)2, 4810 },
	{ (Il2CppRGCTXDataType)2, 5948 },
	{ (Il2CppRGCTXDataType)2, 4229 },
	{ (Il2CppRGCTXDataType)2, 4473 },
	{ (Il2CppRGCTXDataType)2, 4811 },
	{ (Il2CppRGCTXDataType)2, 5949 },
	{ (Il2CppRGCTXDataType)2, 4230 },
	{ (Il2CppRGCTXDataType)2, 4474 },
	{ (Il2CppRGCTXDataType)2, 4812 },
	{ (Il2CppRGCTXDataType)2, 4475 },
	{ (Il2CppRGCTXDataType)2, 4813 },
	{ (Il2CppRGCTXDataType)3, 16654 },
	{ (Il2CppRGCTXDataType)2, 5946 },
	{ (Il2CppRGCTXDataType)2, 4471 },
	{ (Il2CppRGCTXDataType)2, 4809 },
	{ (Il2CppRGCTXDataType)2, 2741 },
	{ (Il2CppRGCTXDataType)2, 4453 },
	{ (Il2CppRGCTXDataType)2, 4454 },
	{ (Il2CppRGCTXDataType)2, 4807 },
	{ (Il2CppRGCTXDataType)3, 16652 },
	{ (Il2CppRGCTXDataType)2, 4452 },
	{ (Il2CppRGCTXDataType)2, 4806 },
	{ (Il2CppRGCTXDataType)3, 16651 },
	{ (Il2CppRGCTXDataType)2, 4227 },
	{ (Il2CppRGCTXDataType)2, 4470 },
	{ (Il2CppRGCTXDataType)2, 4226 },
	{ (Il2CppRGCTXDataType)3, 50783 },
	{ (Il2CppRGCTXDataType)3, 15418 },
	{ (Il2CppRGCTXDataType)2, 3710 },
	{ (Il2CppRGCTXDataType)2, 4456 },
	{ (Il2CppRGCTXDataType)2, 4808 },
	{ (Il2CppRGCTXDataType)2, 5058 },
	{ (Il2CppRGCTXDataType)2, 4504 },
	{ (Il2CppRGCTXDataType)2, 4821 },
	{ (Il2CppRGCTXDataType)3, 16901 },
	{ (Il2CppRGCTXDataType)3, 26567 },
	{ (Il2CppRGCTXDataType)3, 26569 },
	{ (Il2CppRGCTXDataType)2, 890 },
	{ (Il2CppRGCTXDataType)3, 26568 },
	{ (Il2CppRGCTXDataType)3, 26577 },
	{ (Il2CppRGCTXDataType)2, 6924 },
	{ (Il2CppRGCTXDataType)2, 10100 },
	{ (Il2CppRGCTXDataType)3, 45507 },
	{ (Il2CppRGCTXDataType)3, 26578 },
	{ (Il2CppRGCTXDataType)2, 4566 },
	{ (Il2CppRGCTXDataType)2, 4868 },
	{ (Il2CppRGCTXDataType)3, 16668 },
	{ (Il2CppRGCTXDataType)3, 50745 },
	{ (Il2CppRGCTXDataType)2, 10147 },
	{ (Il2CppRGCTXDataType)3, 45629 },
	{ (Il2CppRGCTXDataType)3, 26570 },
	{ (Il2CppRGCTXDataType)2, 6923 },
	{ (Il2CppRGCTXDataType)2, 10087 },
	{ (Il2CppRGCTXDataType)3, 45491 },
	{ (Il2CppRGCTXDataType)3, 16667 },
	{ (Il2CppRGCTXDataType)3, 26571 },
	{ (Il2CppRGCTXDataType)3, 50744 },
	{ (Il2CppRGCTXDataType)2, 10133 },
	{ (Il2CppRGCTXDataType)3, 45554 },
	{ (Il2CppRGCTXDataType)3, 26584 },
	{ (Il2CppRGCTXDataType)2, 6925 },
	{ (Il2CppRGCTXDataType)2, 10117 },
	{ (Il2CppRGCTXDataType)3, 45535 },
	{ (Il2CppRGCTXDataType)3, 28868 },
	{ (Il2CppRGCTXDataType)3, 13387 },
	{ (Il2CppRGCTXDataType)3, 16669 },
	{ (Il2CppRGCTXDataType)3, 13386 },
	{ (Il2CppRGCTXDataType)3, 26585 },
	{ (Il2CppRGCTXDataType)3, 50746 },
	{ (Il2CppRGCTXDataType)2, 10161 },
	{ (Il2CppRGCTXDataType)3, 45718 },
	{ (Il2CppRGCTXDataType)3, 26598 },
	{ (Il2CppRGCTXDataType)2, 6927 },
	{ (Il2CppRGCTXDataType)2, 10149 },
	{ (Il2CppRGCTXDataType)3, 45631 },
	{ (Il2CppRGCTXDataType)3, 26599 },
	{ (Il2CppRGCTXDataType)2, 4569 },
	{ (Il2CppRGCTXDataType)2, 4871 },
	{ (Il2CppRGCTXDataType)3, 16673 },
	{ (Il2CppRGCTXDataType)3, 16672 },
	{ (Il2CppRGCTXDataType)2, 10102 },
	{ (Il2CppRGCTXDataType)3, 45509 },
	{ (Il2CppRGCTXDataType)3, 50752 },
	{ (Il2CppRGCTXDataType)2, 10148 },
	{ (Il2CppRGCTXDataType)3, 45630 },
	{ (Il2CppRGCTXDataType)3, 26591 },
	{ (Il2CppRGCTXDataType)2, 6926 },
	{ (Il2CppRGCTXDataType)2, 10135 },
	{ (Il2CppRGCTXDataType)3, 45556 },
	{ (Il2CppRGCTXDataType)3, 16671 },
	{ (Il2CppRGCTXDataType)3, 16670 },
	{ (Il2CppRGCTXDataType)3, 26592 },
	{ (Il2CppRGCTXDataType)2, 10101 },
	{ (Il2CppRGCTXDataType)3, 45508 },
	{ (Il2CppRGCTXDataType)3, 50751 },
	{ (Il2CppRGCTXDataType)2, 10134 },
	{ (Il2CppRGCTXDataType)3, 45555 },
	{ (Il2CppRGCTXDataType)3, 26605 },
	{ (Il2CppRGCTXDataType)2, 6928 },
	{ (Il2CppRGCTXDataType)2, 10163 },
	{ (Il2CppRGCTXDataType)3, 45720 },
	{ (Il2CppRGCTXDataType)3, 28869 },
	{ (Il2CppRGCTXDataType)3, 13389 },
	{ (Il2CppRGCTXDataType)3, 16675 },
	{ (Il2CppRGCTXDataType)3, 16674 },
	{ (Il2CppRGCTXDataType)3, 13388 },
	{ (Il2CppRGCTXDataType)3, 26606 },
	{ (Il2CppRGCTXDataType)2, 10103 },
	{ (Il2CppRGCTXDataType)3, 45510 },
	{ (Il2CppRGCTXDataType)3, 50753 },
	{ (Il2CppRGCTXDataType)2, 10162 },
	{ (Il2CppRGCTXDataType)3, 45719 },
	{ (Il2CppRGCTXDataType)3, 16664 },
	{ (Il2CppRGCTXDataType)3, 16665 },
	{ (Il2CppRGCTXDataType)3, 16679 },
	{ (Il2CppRGCTXDataType)3, 380 },
	{ (Il2CppRGCTXDataType)3, 379 },
	{ (Il2CppRGCTXDataType)2, 4555 },
	{ (Il2CppRGCTXDataType)2, 4860 },
	{ (Il2CppRGCTXDataType)3, 16666 },
	{ (Il2CppRGCTXDataType)2, 4597 },
	{ (Il2CppRGCTXDataType)2, 4903 },
	{ (Il2CppRGCTXDataType)3, 382 },
	{ (Il2CppRGCTXDataType)2, 1135 },
	{ (Il2CppRGCTXDataType)2, 1274 },
	{ (Il2CppRGCTXDataType)3, 378 },
	{ (Il2CppRGCTXDataType)3, 381 },
	{ (Il2CppRGCTXDataType)3, 415 },
	{ (Il2CppRGCTXDataType)2, 4558 },
	{ (Il2CppRGCTXDataType)2, 4862 },
	{ (Il2CppRGCTXDataType)3, 417 },
	{ (Il2CppRGCTXDataType)2, 886 },
	{ (Il2CppRGCTXDataType)2, 1282 },
	{ (Il2CppRGCTXDataType)3, 414 },
	{ (Il2CppRGCTXDataType)3, 416 },
	{ (Il2CppRGCTXDataType)3, 231 },
	{ (Il2CppRGCTXDataType)2, 9342 },
	{ (Il2CppRGCTXDataType)3, 41594 },
	{ (Il2CppRGCTXDataType)2, 4548 },
	{ (Il2CppRGCTXDataType)2, 4855 },
	{ (Il2CppRGCTXDataType)3, 41595 },
	{ (Il2CppRGCTXDataType)3, 233 },
	{ (Il2CppRGCTXDataType)2, 879 },
	{ (Il2CppRGCTXDataType)2, 1235 },
	{ (Il2CppRGCTXDataType)3, 230 },
	{ (Il2CppRGCTXDataType)3, 232 },
	{ (Il2CppRGCTXDataType)3, 438 },
	{ (Il2CppRGCTXDataType)3, 439 },
	{ (Il2CppRGCTXDataType)2, 9346 },
	{ (Il2CppRGCTXDataType)3, 41599 },
	{ (Il2CppRGCTXDataType)2, 4561 },
	{ (Il2CppRGCTXDataType)2, 4864 },
	{ (Il2CppRGCTXDataType)3, 41600 },
	{ (Il2CppRGCTXDataType)3, 441 },
	{ (Il2CppRGCTXDataType)2, 888 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)3, 437 },
	{ (Il2CppRGCTXDataType)3, 440 },
	{ (Il2CppRGCTXDataType)3, 337 },
	{ (Il2CppRGCTXDataType)2, 9344 },
	{ (Il2CppRGCTXDataType)3, 41596 },
	{ (Il2CppRGCTXDataType)2, 4551 },
	{ (Il2CppRGCTXDataType)2, 4857 },
	{ (Il2CppRGCTXDataType)3, 41597 },
	{ (Il2CppRGCTXDataType)3, 41598 },
	{ (Il2CppRGCTXDataType)3, 339 },
	{ (Il2CppRGCTXDataType)2, 881 },
	{ (Il2CppRGCTXDataType)2, 1263 },
	{ (Il2CppRGCTXDataType)3, 336 },
	{ (Il2CppRGCTXDataType)3, 338 },
	{ (Il2CppRGCTXDataType)3, 351 },
	{ (Il2CppRGCTXDataType)2, 883 },
	{ (Il2CppRGCTXDataType)3, 353 },
	{ (Il2CppRGCTXDataType)2, 1266 },
	{ (Il2CppRGCTXDataType)3, 350 },
	{ (Il2CppRGCTXDataType)3, 352 },
	{ (Il2CppRGCTXDataType)2, 10867 },
	{ (Il2CppRGCTXDataType)2, 2742 },
	{ (Il2CppRGCTXDataType)3, 15460 },
	{ (Il2CppRGCTXDataType)2, 3727 },
	{ (Il2CppRGCTXDataType)2, 11304 },
	{ (Il2CppRGCTXDataType)3, 41591 },
	{ (Il2CppRGCTXDataType)3, 41592 },
	{ (Il2CppRGCTXDataType)2, 5075 },
	{ (Il2CppRGCTXDataType)3, 41593 },
	{ (Il2CppRGCTXDataType)2, 791 },
	{ (Il2CppRGCTXDataType)2, 1239 },
	{ (Il2CppRGCTXDataType)3, 257 },
	{ (Il2CppRGCTXDataType)3, 35941 },
	{ (Il2CppRGCTXDataType)2, 8264 },
	{ (Il2CppRGCTXDataType)3, 35968 },
	{ (Il2CppRGCTXDataType)2, 1610 },
	{ (Il2CppRGCTXDataType)3, 3052 },
	{ (Il2CppRGCTXDataType)3, 35947 },
	{ (Il2CppRGCTXDataType)3, 13328 },
	{ (Il2CppRGCTXDataType)2, 923 },
	{ (Il2CppRGCTXDataType)3, 35942 },
	{ (Il2CppRGCTXDataType)2, 8259 },
	{ (Il2CppRGCTXDataType)3, 3562 },
	{ (Il2CppRGCTXDataType)2, 1657 },
	{ (Il2CppRGCTXDataType)2, 2933 },
	{ (Il2CppRGCTXDataType)3, 13346 },
	{ (Il2CppRGCTXDataType)3, 35943 },
	{ (Il2CppRGCTXDataType)3, 13323 },
	{ (Il2CppRGCTXDataType)3, 13324 },
	{ (Il2CppRGCTXDataType)3, 13322 },
	{ (Il2CppRGCTXDataType)3, 13325 },
	{ (Il2CppRGCTXDataType)2, 2929 },
	{ (Il2CppRGCTXDataType)2, 10927 },
	{ (Il2CppRGCTXDataType)3, 16662 },
	{ (Il2CppRGCTXDataType)3, 13327 },
	{ (Il2CppRGCTXDataType)2, 4383 },
	{ (Il2CppRGCTXDataType)3, 13326 },
	{ (Il2CppRGCTXDataType)2, 4235 },
	{ (Il2CppRGCTXDataType)2, 10861 },
	{ (Il2CppRGCTXDataType)2, 4507 },
	{ (Il2CppRGCTXDataType)2, 4823 },
	{ (Il2CppRGCTXDataType)3, 3073 },
	{ (Il2CppRGCTXDataType)2, 1612 },
	{ (Il2CppRGCTXDataType)2, 10953 },
	{ (Il2CppRGCTXDataType)3, 15439 },
	{ (Il2CppRGCTXDataType)2, 3720 },
	{ (Il2CppRGCTXDataType)3, 17574 },
	{ (Il2CppRGCTXDataType)3, 17575 },
	{ (Il2CppRGCTXDataType)3, 17580 },
	{ (Il2CppRGCTXDataType)2, 5069 },
	{ (Il2CppRGCTXDataType)3, 17577 },
	{ (Il2CppRGCTXDataType)3, 51953 },
	{ (Il2CppRGCTXDataType)2, 2937 },
	{ (Il2CppRGCTXDataType)3, 13376 },
	{ (Il2CppRGCTXDataType)1, 4374 },
	{ (Il2CppRGCTXDataType)2, 10873 },
	{ (Il2CppRGCTXDataType)3, 17576 },
	{ (Il2CppRGCTXDataType)1, 10873 },
	{ (Il2CppRGCTXDataType)1, 5069 },
	{ (Il2CppRGCTXDataType)2, 11302 },
	{ (Il2CppRGCTXDataType)2, 10873 },
	{ (Il2CppRGCTXDataType)2, 4513 },
	{ (Il2CppRGCTXDataType)2, 4827 },
	{ (Il2CppRGCTXDataType)3, 17581 },
	{ (Il2CppRGCTXDataType)3, 17579 },
	{ (Il2CppRGCTXDataType)3, 17578 },
	{ (Il2CppRGCTXDataType)2, 673 },
	{ (Il2CppRGCTXDataType)3, 13390 },
	{ (Il2CppRGCTXDataType)2, 899 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	215,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	67,
	s_rgctxIndices,
	306,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
