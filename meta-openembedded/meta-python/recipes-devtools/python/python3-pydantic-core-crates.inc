# Autogenerated with 'bitbake -c update_crates python3-pydantic-core'

# from Cargo.lock
SRC_URI += " \
    crate://crates.io/ahash/0.8.7 \
    crate://crates.io/aho-corasick/1.0.2 \
    crate://crates.io/allocator-api2/0.2.16 \
    crate://crates.io/autocfg/1.1.0 \
    crate://crates.io/base64/0.21.7 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/cc/1.0.79 \
    crate://crates.io/cfg-if/1.0.0 \
    crate://crates.io/enum_dispatch/0.3.12 \
    crate://crates.io/equivalent/1.0.1 \
    crate://crates.io/form_urlencoded/1.2.1 \
    crate://crates.io/getrandom/0.2.10 \
    crate://crates.io/hashbrown/0.14.3 \
    crate://crates.io/heck/0.4.1 \
    crate://crates.io/idna/0.5.0 \
    crate://crates.io/indexmap/2.0.0 \
    crate://crates.io/indoc/2.0.4 \
    crate://crates.io/itoa/1.0.8 \
    crate://crates.io/jiter/0.0.6 \
    crate://crates.io/lexical-core/0.8.5 \
    crate://crates.io/lexical-parse-float/0.8.5 \
    crate://crates.io/lexical-parse-integer/0.8.6 \
    crate://crates.io/lexical-util/0.8.5 \
    crate://crates.io/lexical-write-float/0.8.5 \
    crate://crates.io/lexical-write-integer/0.8.5 \
    crate://crates.io/libc/0.2.147 \
    crate://crates.io/lock_api/0.4.10 \
    crate://crates.io/memchr/2.6.3 \
    crate://crates.io/memoffset/0.9.0 \
    crate://crates.io/num-bigint/0.4.4 \
    crate://crates.io/num-integer/0.1.45 \
    crate://crates.io/num-traits/0.2.16 \
    crate://crates.io/once_cell/1.18.0 \
    crate://crates.io/parking_lot/0.12.1 \
    crate://crates.io/parking_lot_core/0.9.8 \
    crate://crates.io/percent-encoding/2.3.1 \
    crate://crates.io/portable-atomic/1.6.0 \
    crate://crates.io/proc-macro2/1.0.76 \
    crate://crates.io/pyo3/0.20.3 \
    crate://crates.io/pyo3-build-config/0.20.3 \
    crate://crates.io/pyo3-ffi/0.20.3 \
    crate://crates.io/pyo3-macros/0.20.3 \
    crate://crates.io/pyo3-macros-backend/0.20.3 \
    crate://crates.io/python3-dll-a/0.2.9 \
    crate://crates.io/quote/1.0.35 \
    crate://crates.io/redox_syscall/0.3.5 \
    crate://crates.io/regex/1.10.2 \
    crate://crates.io/regex-automata/0.4.3 \
    crate://crates.io/regex-syntax/0.8.2 \
    crate://crates.io/rustversion/1.0.13 \
    crate://crates.io/ryu/1.0.14 \
    crate://crates.io/scopeguard/1.1.0 \
    crate://crates.io/serde/1.0.195 \
    crate://crates.io/serde_derive/1.0.195 \
    crate://crates.io/serde_json/1.0.109 \
    crate://crates.io/smallvec/1.11.2 \
    crate://crates.io/speedate/0.13.0 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/strum/0.25.0 \
    crate://crates.io/strum_macros/0.25.3 \
    crate://crates.io/syn/2.0.48 \
    crate://crates.io/target-lexicon/0.12.9 \
    crate://crates.io/tinyvec/1.6.0 \
    crate://crates.io/tinyvec_macros/0.1.1 \
    crate://crates.io/unicode-bidi/0.3.13 \
    crate://crates.io/unicode-ident/1.0.10 \
    crate://crates.io/unicode-normalization/0.1.22 \
    crate://crates.io/unindent/0.2.3 \
    crate://crates.io/url/2.5.0 \
    crate://crates.io/uuid/1.6.1 \
    crate://crates.io/version_check/0.9.4 \
    crate://crates.io/wasi/0.11.0+wasi-snapshot-preview1 \
    crate://crates.io/windows-targets/0.48.1 \
    crate://crates.io/windows_aarch64_gnullvm/0.48.0 \
    crate://crates.io/windows_aarch64_msvc/0.48.0 \
    crate://crates.io/windows_i686_gnu/0.48.0 \
    crate://crates.io/windows_i686_msvc/0.48.0 \
    crate://crates.io/windows_x86_64_gnu/0.48.0 \
    crate://crates.io/windows_x86_64_gnullvm/0.48.0 \
    crate://crates.io/windows_x86_64_msvc/0.48.0 \
    crate://crates.io/zerocopy/0.7.32 \
    crate://crates.io/zerocopy-derive/0.7.32 \
"

SRC_URI[ahash-0.8.7.sha256sum] = "77c3a9648d43b9cd48db467b3f87fdd6e146bcc88ab0180006cef2179fe11d01"
SRC_URI[aho-corasick-1.0.2.sha256sum] = "43f6cb1bf222025340178f382c426f13757b2960e89779dfcb319c32542a5a41"
SRC_URI[allocator-api2-0.2.16.sha256sum] = "0942ffc6dcaadf03badf6e6a2d0228460359d5e34b57ccdc720b7382dfbd5ec5"
SRC_URI[autocfg-1.1.0.sha256sum] = "d468802bab17cbc0cc575e9b053f41e72aa36bfa6b7f55e3529ffa43161b97fa"
SRC_URI[base64-0.21.7.sha256sum] = "9d297deb1925b89f2ccc13d7635fa0714f12c87adce1c75356b39ca9b7178567"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[cc-1.0.79.sha256sum] = "50d30906286121d95be3d479533b458f87493b30a4b5f79a607db8f5d11aa91f"
SRC_URI[cfg-if-1.0.0.sha256sum] = "baf1de4339761588bc0619e3cbc0120ee582ebb74b53b4efbf79117bd2da40fd"
SRC_URI[enum_dispatch-0.3.12.sha256sum] = "8f33313078bb8d4d05a2733a94ac4c2d8a0df9a2b84424ebf4f33bfc224a890e"
SRC_URI[equivalent-1.0.1.sha256sum] = "5443807d6dff69373d433ab9ef5378ad8df50ca6298caf15de6e52e24aaf54d5"
SRC_URI[form_urlencoded-1.2.1.sha256sum] = "e13624c2627564efccf4934284bdd98cbaa14e79b0b5a141218e507b3a823456"
SRC_URI[getrandom-0.2.10.sha256sum] = "be4136b2a15dd319360be1c07d9933517ccf0be8f16bf62a3bee4f0d618df427"
SRC_URI[hashbrown-0.14.3.sha256sum] = "290f1a1d9242c78d09ce40a5e87e7554ee637af1351968159f4952f028f75604"
SRC_URI[heck-0.4.1.sha256sum] = "95505c38b4572b2d910cecb0281560f54b440a19336cbbcb27bf6ce6adc6f5a8"
SRC_URI[idna-0.5.0.sha256sum] = "634d9b1461af396cad843f47fdba5597a4f9e6ddd4bfb6ff5d85028c25cb12f6"
SRC_URI[indexmap-2.0.0.sha256sum] = "d5477fe2230a79769d8dc68e0eabf5437907c0457a5614a9e8dddb67f65eb65d"
SRC_URI[indoc-2.0.4.sha256sum] = "1e186cfbae8084e513daff4240b4797e342f988cecda4fb6c939150f96315fd8"
SRC_URI[itoa-1.0.8.sha256sum] = "62b02a5381cc465bd3041d84623d0fa3b66738b52b8e2fc3bab8ad63ab032f4a"
SRC_URI[jiter-0.0.6.sha256sum] = "87db066a99f69382be06d02313f8ce989996b53a04a8a70cfd1a6483a56227f7"
SRC_URI[lexical-core-0.8.5.sha256sum] = "2cde5de06e8d4c2faabc400238f9ae1c74d5412d03a7bd067645ccbc47070e46"
SRC_URI[lexical-parse-float-0.8.5.sha256sum] = "683b3a5ebd0130b8fb52ba0bdc718cc56815b6a097e28ae5a6997d0ad17dc05f"
SRC_URI[lexical-parse-integer-0.8.6.sha256sum] = "6d0994485ed0c312f6d965766754ea177d07f9c00c9b82a5ee62ed5b47945ee9"
SRC_URI[lexical-util-0.8.5.sha256sum] = "5255b9ff16ff898710eb9eb63cb39248ea8a5bb036bea8085b1a767ff6c4e3fc"
SRC_URI[lexical-write-float-0.8.5.sha256sum] = "accabaa1c4581f05a3923d1b4cfd124c329352288b7b9da09e766b0668116862"
SRC_URI[lexical-write-integer-0.8.5.sha256sum] = "e1b6f3d1f4422866b68192d62f77bc5c700bee84f3069f2469d7bc8c77852446"
SRC_URI[libc-0.2.147.sha256sum] = "b4668fb0ea861c1df094127ac5f1da3409a82116a4ba74fca2e58ef927159bb3"
SRC_URI[lock_api-0.4.10.sha256sum] = "c1cc9717a20b1bb222f333e6a92fd32f7d8a18ddc5a3191a11af45dcbf4dcd16"
SRC_URI[memchr-2.6.3.sha256sum] = "8f232d6ef707e1956a43342693d2a31e72989554d58299d7a88738cc95b0d35c"
SRC_URI[memoffset-0.9.0.sha256sum] = "5a634b1c61a95585bd15607c6ab0c4e5b226e695ff2800ba0cdccddf208c406c"
SRC_URI[num-bigint-0.4.4.sha256sum] = "608e7659b5c3d7cba262d894801b9ec9d00de989e8a82bd4bef91d08da45cdc0"
SRC_URI[num-integer-0.1.45.sha256sum] = "225d3389fb3509a24c93f5c29eb6bde2586b98d9f016636dff58d7c6f7569cd9"
SRC_URI[num-traits-0.2.16.sha256sum] = "f30b0abd723be7e2ffca1272140fac1a2f084c77ec3e123c192b66af1ee9e6c2"
SRC_URI[once_cell-1.18.0.sha256sum] = "dd8b5dd2ae5ed71462c540258bedcb51965123ad7e7ccf4b9a8cafaa4a63576d"
SRC_URI[parking_lot-0.12.1.sha256sum] = "3742b2c103b9f06bc9fff0a37ff4912935851bee6d36f3c02bcc755bcfec228f"
SRC_URI[parking_lot_core-0.9.8.sha256sum] = "93f00c865fe7cabf650081affecd3871070f26767e7b2070a3ffae14c654b447"
SRC_URI[percent-encoding-2.3.1.sha256sum] = "e3148f5046208a5d56bcfc03053e3ca6334e51da8dfb19b6cdc8b306fae3283e"
SRC_URI[portable-atomic-1.6.0.sha256sum] = "7170ef9988bc169ba16dd36a7fa041e5c4cbeb6a35b76d4c03daded371eae7c0"
SRC_URI[proc-macro2-1.0.76.sha256sum] = "95fc56cda0b5c3325f5fbbd7ff9fda9e02bb00bb3dac51252d2f1bfa1cb8cc8c"
SRC_URI[pyo3-0.20.3.sha256sum] = "53bdbb96d49157e65d45cc287af5f32ffadd5f4761438b527b055fb0d4bb8233"
SRC_URI[pyo3-build-config-0.20.3.sha256sum] = "deaa5745de3f5231ce10517a1f5dd97d53e5a2fd77aa6b5842292085831d48d7"
SRC_URI[pyo3-ffi-0.20.3.sha256sum] = "62b42531d03e08d4ef1f6e85a2ed422eb678b8cd62b762e53891c05faf0d4afa"
SRC_URI[pyo3-macros-0.20.3.sha256sum] = "7305c720fa01b8055ec95e484a6eca7a83c841267f0dd5280f0c8b8551d2c158"
SRC_URI[pyo3-macros-backend-0.20.3.sha256sum] = "7c7e9b68bb9c3149c5b0cade5d07f953d6d125eb4337723c4ccdb665f1f96185"
SRC_URI[python3-dll-a-0.2.9.sha256sum] = "d5f07cd4412be8fa09a721d40007c483981bbe072cd6a21f2e83e04ec8f8343f"
SRC_URI[quote-1.0.35.sha256sum] = "291ec9ab5efd934aaf503a6466c5d5251535d108ee747472c3977cc5acc868ef"
SRC_URI[redox_syscall-0.3.5.sha256sum] = "567664f262709473930a4bf9e51bf2ebf3348f2e748ccc50dea20646858f8f29"
SRC_URI[regex-1.10.2.sha256sum] = "380b951a9c5e80ddfd6136919eef32310721aa4aacd4889a8d39124b026ab343"
SRC_URI[regex-automata-0.4.3.sha256sum] = "5f804c7828047e88b2d32e2d7fe5a105da8ee3264f01902f796c8e067dc2483f"
SRC_URI[regex-syntax-0.8.2.sha256sum] = "c08c74e62047bb2de4ff487b251e4a92e24f48745648451635cec7d591162d9f"
SRC_URI[rustversion-1.0.13.sha256sum] = "dc31bd9b61a32c31f9650d18add92aa83a49ba979c143eefd27fe7177b05bd5f"
SRC_URI[ryu-1.0.14.sha256sum] = "fe232bdf6be8c8de797b22184ee71118d63780ea42ac85b61d1baa6d3b782ae9"
SRC_URI[scopeguard-1.1.0.sha256sum] = "d29ab0c6d3fc0ee92fe66e2d99f700eab17a8d57d1c1d3b748380fb20baa78cd"
SRC_URI[serde-1.0.195.sha256sum] = "63261df402c67811e9ac6def069e4786148c4563f4b50fd4bf30aa370d626b02"
SRC_URI[serde_derive-1.0.195.sha256sum] = "46fe8f8603d81ba86327b23a2e9cdf49e1255fb94a4c5f297f6ee0547178ea2c"
SRC_URI[serde_json-1.0.109.sha256sum] = "cb0652c533506ad7a2e353cce269330d6afd8bdfb6d75e0ace5b35aacbd7b9e9"
SRC_URI[smallvec-1.11.2.sha256sum] = "4dccd0940a2dcdf68d092b8cbab7dc0ad8fa938bf95787e1b916b0e3d0e8e970"
SRC_URI[speedate-0.13.0.sha256sum] = "242f76c50fd18cbf098607090ade73a08d39cfd84ea835f3796a2c855223b19b"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[strum-0.25.0.sha256sum] = "290d54ea6f91c969195bdbcd7442c8c2a2ba87da8bf60a7ee86a235d4bc1e125"
SRC_URI[strum_macros-0.25.3.sha256sum] = "23dc1fa9ac9c169a78ba62f0b841814b7abae11bdd047b9c58f893439e309ea0"
SRC_URI[syn-2.0.48.sha256sum] = "0f3531638e407dfc0814761abb7c00a5b54992b849452a0646b7f65c9f770f3f"
SRC_URI[target-lexicon-0.12.9.sha256sum] = "df8e77cb757a61f51b947ec4a7e3646efd825b73561db1c232a8ccb639e611a0"
SRC_URI[tinyvec-1.6.0.sha256sum] = "87cc5ceb3875bb20c2890005a4e226a4651264a5c75edb2421b52861a0a0cb50"
SRC_URI[tinyvec_macros-0.1.1.sha256sum] = "1f3ccbac311fea05f86f61904b462b55fb3df8837a366dfc601a0161d0532f20"
SRC_URI[unicode-bidi-0.3.13.sha256sum] = "92888ba5573ff080736b3648696b70cafad7d250551175acbaa4e0385b3e1460"
SRC_URI[unicode-ident-1.0.10.sha256sum] = "22049a19f4a68748a168c0fc439f9516686aa045927ff767eca0a85101fb6e73"
SRC_URI[unicode-normalization-0.1.22.sha256sum] = "5c5713f0fc4b5db668a2ac63cdb7bb4469d8c9fed047b1d0292cc7b0ce2ba921"
SRC_URI[unindent-0.2.3.sha256sum] = "c7de7d73e1754487cb58364ee906a499937a0dfabd86bcb980fa99ec8c8fa2ce"
SRC_URI[url-2.5.0.sha256sum] = "31e6302e3bb753d46e83516cae55ae196fc0c309407cf11ab35cc51a4c2a4633"
SRC_URI[uuid-1.6.1.sha256sum] = "5e395fcf16a7a3d8127ec99782007af141946b4795001f876d54fb0d55978560"
SRC_URI[version_check-0.9.4.sha256sum] = "49874b5167b65d7193b8aba1567f5c7d93d001cafc34600cee003eda787e483f"
SRC_URI[wasi-0.11.0+wasi-snapshot-preview1.sha256sum] = "9c8d87e72b64a3b4db28d11ce29237c246188f4f51057d65a7eab63b7987e423"
SRC_URI[windows-targets-0.48.1.sha256sum] = "05d4b17490f70499f20b9e791dcf6a299785ce8af4d709018206dc5b4953e95f"
SRC_URI[windows_aarch64_gnullvm-0.48.0.sha256sum] = "91ae572e1b79dba883e0d315474df7305d12f569b400fcf90581b06062f7e1bc"
SRC_URI[windows_aarch64_msvc-0.48.0.sha256sum] = "b2ef27e0d7bdfcfc7b868b317c1d32c641a6fe4629c171b8928c7b08d98d7cf3"
SRC_URI[windows_i686_gnu-0.48.0.sha256sum] = "622a1962a7db830d6fd0a69683c80a18fda201879f0f447f065a3b7467daa241"
SRC_URI[windows_i686_msvc-0.48.0.sha256sum] = "4542c6e364ce21bf45d69fdd2a8e455fa38d316158cfd43b3ac1c5b1b19f8e00"
SRC_URI[windows_x86_64_gnu-0.48.0.sha256sum] = "ca2b8a661f7628cbd23440e50b05d705db3686f894fc9580820623656af974b1"
SRC_URI[windows_x86_64_gnullvm-0.48.0.sha256sum] = "7896dbc1f41e08872e9d5e8f8baa8fdd2677f29468c4e156210174edc7f7b953"
SRC_URI[windows_x86_64_msvc-0.48.0.sha256sum] = "1a515f5799fe4961cb532f983ce2b23082366b898e52ffbce459c86f67c8378a"
SRC_URI[zerocopy-0.7.32.sha256sum] = "74d4d3961e53fa4c9a25a8637fc2bfaf2595b3d3ae34875568a5cf64787716be"
SRC_URI[zerocopy-derive-0.7.32.sha256sum] = "9ce1b18ccd8e73a9321186f97e46f9f04b778851177567b1975109d26a08d2a6"