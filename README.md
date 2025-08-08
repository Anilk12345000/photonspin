### PhotonSpin

---

![PhotonSpin](https://repository-images.githubusercontent.com/1029423925/b6a67ec4-3b0b-40cd-abdc-605dc2f30790 "PhotonSpin")

---

PhotonSpin is an extremely-fast, large-period, statistically-strong PRNG that outperforms SHISHUA as the fastest PRNG in the world.

The license is public domain. Anyone is free to use it for any purpose without restriction. It has no warranty.

---

`photonspin64` is a PRNG function that generates 20 64-bit, pseudorandom, unsigned integers from 64-bit state integers.

It accepts the following argument.

1. `s` is the `struct photonspin64_s` pointer that contains the state. Each state integer must be seeded with any `uint64_t` value.

The return value data type is `void`. The output is assigned to `elements`.

It has a minimum period of 2¹⁰²⁴ without broken cycles, confirmed by adequately-mixed, equally-distributed state assignments, an extended state and rigorous black-box testing of various 2³² cycles from PhotonSpin8 for scaled-down computational feasibility. Furthermore, a full cycle generates at least 1 of each number from a range of 2⁶⁴ numbers and zeroland escapes quickly with conditionals that prevent excessive subsequent duplicate pairs in each segment of 20 generated numbers.

Up to 2⁶⁴ parallel states each have a non-overlapping cycle of at least 2⁶⁴ numbers by seeding `a` with non-overlapping values and seeding `b`, `c` and `elements` with any combination of overlapping values. The first segment of 20 generated numbers from each parallel cycle should be skipped to avoid correlations.

It passes `stdin64` PractRand tests.

In conclusion, PhotonSpin64 provides enhanced parallelism, period and speed with similar statistical test results as an ideal alternative to SHISHUA and other PRNGs that output large amounts of state.

---

`photonspin32` is a PRNG function that generates 20 32-bit, pseudorandom, unsigned integers from 32-bit state integers.

It accepts the following argument.

1. `s` is the `struct photonspin32_s` pointer that contains the state. Each state integer must be seeded with any `uint32_t` value.

The return value data type is `void`. The output is assigned to `elements`.

It has a minimum period of 2⁵¹² without broken cycles, confirmed by adequately-mixed, equally-distributed state assignments, an extended state and rigorous black-box testing of various 2³² cycles from PhotonSpin8 for scaled-down computational feasibility. Furthermore, a full cycle generates at least 1 of each number from a range of 2³² numbers and zeroland escapes quickly with conditionals that prevent excessive subsequent duplicate pairs in each segment of 20 generated numbers.

Up to 2³² parallel states each have a non-overlapping cycle of at least 2³² numbers by seeding `a` with non-overlapping values and seeding `b`, `c` and `elements` with any combination of overlapping values. The first segment of 20 generated numbers from each parallel cycle should be skipped to avoid correlations.

It passes `stdin32` PractRand tests.

In conclusion, PhotonSpin32 provides enhanced parallelism, period and speed with similar statistical test results as an ideal alternative to 32-bit variants of SHISHUA and other PRNGs that output large amounts of state.

---

8-bit and 16-bit variants are coming soon.
