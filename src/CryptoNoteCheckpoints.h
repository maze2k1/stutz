// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
// {     0, "7fb97df81221dd1366051b2d0bc7f49c66c22ac4431d879c895b06d66ef66f4c"},
// {  5000, "1325029c8be54b9e027f17ec481a0a361e4821381d1d12de1492e92cd38d4c11"},
// { 10000, "08b25f220656df008499f36c593bc7b875e3598eae0c9c32ff195e735e51ff1d"},
// { 15000, "8d83bdfde2e42b3be9ef194cd327ad5f893c9cab249395378e03aee8db9d420a"},
// { 20000, "aed3a0fe6adc5a828e4b9cfa97cea53d2ae565089b583756058e5c71682fde4d"},
// { 25000, "cd175f1ed7d6b2bf3e0ed7585aacd17c57b4cd708c4bd32183224d45716767c5"},
// { 30000, "90f91f95ea58a37b98cacd3c024fa2eaaa33e0eadc632aa3b61b061fb06b3efe"},
// { 35000, "7da853cb5d44abf72f2b2da43c6571e8287eec077a9c9059692f5b5c1ed3f73e"},
// { 40000, "da9451a44540a96aff987d4046a13b20ffe4bc08a0ac536a0c196f00d24a90ee"},
// { 45000, "122e4010229f1a2a99ed81ab9c7519a4cd5c23e9754f21a17b4a1e33411caf28"},
// { 50000, "dd40ba6a33e7c6ff84927d510881e285eba9a17cbde43da587aa6cc41883b852"},
// { 55000, "0caf8cd5552afc5701cfcc29bf8e8292064a65cbb4ffc26ae24decf7e43838bf"},
// { 60000, "1e2f5f6c9c4b4b3c44e45ea1bd9aa2893721a44793fb743564e6b105d5f978ba"},
// { 65000, "b55164b838f342d2a2258aac5b6ce230141f14e9f2472818ac0e4cf0263130ed"},
// { 70000, "33c5871e424d72525ac351baad3d698f0886e11836eed8db878ae6b436128074"},
// { 75000, "2425d24ba8bd69f9601430f3a5a545bdc3931ddd30f06f82ceeec2766c9ca74a"},
// { 80000, "9a62c2b5d8ae89a86019c52964c7f74c8b29504c0088d21d7f1f8484ad103440"},
// { 85000, "dc2d2e4ecb85c13d28872d875cccaf4f90d7e3ffd5cd134119c53633f802296a"},
// { 90000, "a123b24e7d1ea23eb610129ffad2b575baefac243c026c1ea7381fefcd1bd743"},
// { 95000, "04310be9aa0aaa2432c97cfce9db8153c3872942024015132220d95837a7f7df"},
// {100000, "0559c2aad34dc8f47b30fefa2652aca9039d6ec0137af3fd0beb16d7c6f91b1d"},
// {105000, "feaf9c526496c66efbe237d929fb65e6f102fa9b9158424c97d7ee3736a6b658"},
// {110000, "23c14bb24a598df879e154ca745a6610e759765e68e8aa6b9c960f2c621d41f4"},
// {115000, "e874317e8308896ee6694eb73159edccabdaacc09981908ec7a06640be6a6a46"},
// {120000, "c78efd3fd072f3993bb1fff4bc02998057e749846dac1f63fb57e6b1fa1abb2d"},
// {125000, "eb7115cc9701d5757bc9e89c29150cac97115502860c919580ab3e51bf55bc13"},
// {130000, "6db14e442b7774e3f240342e4efc56ed73165fb94e3bc9d2798e9e9011a4fa02"},
// {135000, "dc90ae322b120f9b34474ff536edf3d16b7c5e9794e14aca5343a22279a803d2"},
// {140000, "0138d4b8a46de402691e40e0b912ceb54e1c7894583f6a9177bea18b66d5385a"},
// {145000, "3713cd82b49e2300ebd74e359895709a0f9da1ace1903dd1731b66d02b7cc4bb"},
// {150000, "ff867db0eb78ada7375656aafc452fe46a364ce998eb9add59399c13fc91accb"},
// {155000, "a03383ee6938ab7f2ddbd0a2036c8b41db82e32cc91bb17b1d3d86ae50361170"},
// {160000, "ec666aaa200f72c1e928ac9b8b38c43bf0d1c97b7d4020dea3fe94a5a041da4a"},
// {165000, "a0899e0fd93a48c3828a472c960012f2f0582d320de7f2ca9b80ff3ee139f1f0"},
// {170000, "9453b1bf99e98901949c7d88c9f6db8744b413f8160aa0ac0a467d2375c1f8fd"},
// {175000, "d5286be301c0c9f3df317929bae432dec1160baf658c24cace8adc942c62dd44"},
// {180000, "195deec0a5dff662f89f6bad28f205ddb3c72d778e7bfe9e0362cf9b244b791d"},
// {185000, "d741fcfa4c085a055bc248e56db5ff18d6e0665590d8271e9a445819e50cbed4"},
// {190000, "d881cd9e76ca0890bd881e75dd1a611558a44543a68326aeefe33f656db0fb21"},
// {195000, "48b5c133876d2cc4d60976501981c0af1057321c4e404531c1fa6e04e3b31c50"},
// {200000, "3438412001e186b0de417819353046199ad99c4e05b488e8391d7cc6c80a918e"},
// {205000, "43b5199c3af492afcdd22072d3b1a0673dbbf24b892cf9d141612f00244dbfe6"},
// {210000, "8c784e294af9694f4d5d817ef6637e561eb4a478d99d942d2da1a3906359a2ff"},
// {215000, "98f0ec88e9e9c756808b3a36e1860888f466868ef0fca7de360b82ad26f65c7b"},
// {220000, "5e43f24ff1e5e85e1c6f86cd09d1854ea76c605ca6c6ada4ea5fd3873c062cec"},
// {225000, "816c3af64da7b26d3d77ee6087e3f5c44652ffe1f66f94902f72afb94f4f44e9"},
// {230000, "95b16e0e248c39a7fd26c6f7fac420f317dd6deb9ee9bc541022e4412a9517be"},
// {235000, "c629cd44e582f30aab010d071c46297f104ec8f093e798ed5de003faef4c3f0d"},
// {240000, "c6617c3d1e873071e217d3970ec5aa56eab3839061ad80b45d3cd137b2c1f3c5"},
// {245000, "44a0a64a7817c7b2c56d27cd5a396892418b8c797433c1c3517f3d3425080c01"},
// {250000, "2df370f9c7648d158c570344066ce479abd0425162023afb8088109aa311fbe4"},
// {255000, "2d6e05ef80ad0a51109e39ead7e9d0ef06f9668c6a7358093497ed12ae5569e0"},
// {260000, "de79c513a8ff2408968c813f95e9bacb346dc736fd4db12aa522b6c35b61870b"},
// {265000, "a5908d9b7ab9a81fb4788b3297e207a338d3eb95e43d536dbd65ef3416a95a3e"},
// {270000, "81025a563355ec4b4cc327b4d22a421ef2b72e2fc80309994ee417ab1e34be04"},
// {275000, "9935e59e95b81251b053c9aa1b82eef393a13004e4c0b6efff1e181f5262feca"},
// {280000, "0864401ffb378cd03ad45ce3b7f8077dfd1cbe563e56ddf5155a87347ed0cf44"},
// {285000, "0281cdc8bb3c7a076cd7244fc7816c8feb1c8eb985869ff859a444cd8c2e9d65"},
// {290000, "f571dfd0f9c8e332d1c683953bfe7fc94b5e7344c1df1ccd80909fd746656bc2"},
// {295000, "f33b271c9cfeab3dba4957be57fbecf45a4cea52861979a9dd9d8d2b56c48ec0"},
// {300000, "a0ad53a2bc6c7ac6fd6f92586ade93994c49bdc4fb269f4c43bcc87ed7d07e66"},
// {305000, "33792d85e883f054158ad253285f2ced61798e393135a2d591ccb5ccc60ee724"},
// {310000, "5143cea534ef2ba5a5e18c0877c9c8877d469d3ae040406a65cbf23ea06b4585"},
// {315000, "7bb70271b257d3cb784b026dd9dea1aacb1e6feb8b31c0151819861226b75e88"},
// {320000, "f9f4f51eea457570bf6c1beb599147d03ba4c13c573222fde9454018a0e531f7"},
// {325000, "18cc18d052c4b16f3aa415aa860f012d37028cf61c77f0fd4126aed67f0803b3"},
// {330000, "d63c41bfb0c5468461c924b3983c05816295f358df2599363db96fd1eb257036"},
// {335000, "528ae5c23aee04bee553a963832b59f72bf08903209caac1f84ea4b0056d5464"},
// {340000, "8181936abc5edc3b25c3d5f39fce7ef4a63f332d9d310afa507170f793a3dbd8"},
// {345000, "89bacab01b987b42af745c67571bf87d3edfd686f3c16f0f1bed0fe99fcfa0d4"},
// {350000, "45aaec7312e7b85ae1c05408fbf4fe88ee44a72b85d9c9277f17596a0da84bfd"},
// {355000, "139e4926dc3a688f2ec6f043062b8398b605e608befff67aac37eeba7c53e2ef"}
// };
}
