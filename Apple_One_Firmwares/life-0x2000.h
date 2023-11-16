const unsigned char lifegame[] = {
    0xa2, 0x00, 0xa9, 0xa0, 0x9d, 0x00, 0x24, 0x9d, 0x00, 0x25, 0x9d, 0x00, 0x26, 0x9d, 0x00, 0x27,
    0xe8, 0xd0, 0xf1, 0xbd, 0x80, 0x21, 0x20, 0xef, 0xff, 0xe8, 0xe0, 0x38, 0xd0, 0xf5, 0x20, 0x02,
    0x21, 0xc9, 0x8d, 0xd0, 0xf9, 0x20, 0x3f, 0x21, 0x29, 0x3f, 0x69, 0x20, 0x85, 0xf9, 0xa0, 0x00,
    0x20, 0x3f, 0x21, 0x29, 0x03, 0x18, 0x69, 0x24, 0x85, 0xf1, 0xa5, 0xfa, 0x85, 0xf0, 0xa9, 0xaa,
    0x91, 0xf0, 0xc6, 0xf9, 0xd0, 0xea, 0xa9, 0x24, 0x85, 0xf9, 0xa9, 0x40, 0x85, 0xf8, 0xa2, 0x27,
    0xa9, 0xad, 0x9d, 0xd8, 0x27, 0x9d, 0x40, 0x24, 0xca, 0x10, 0xf7, 0xb1, 0xf8, 0x20, 0xef, 0xff,
    0xe6, 0xf8, 0xd0, 0xf7, 0xe6, 0xf9, 0xa5, 0xf9, 0xc9, 0x28, 0xd0, 0xef, 0x20, 0x02, 0x21, 0xa0,
    0x00, 0x20, 0xf3, 0x20, 0xb1, 0xf0, 0x91, 0xf2, 0xe6, 0xf0, 0xe6, 0xf2, 0xd0, 0xf6, 0xe6, 0xf1,
    0xe6, 0xf3, 0xa5, 0xf1, 0xc9, 0x28, 0xd0, 0xec, 0x20, 0x61, 0x21, 0xa0, 0x00, 0xb1, 0xf2, 0xc9,
    0xaa, 0xd0, 0x0a, 0xa0, 0x27, 0x20, 0x14, 0x21, 0xa0, 0x01, 0x20, 0x1d, 0x21, 0xe6, 0xf0, 0xe6,
    0xf2, 0xd0, 0xe8, 0xe6, 0xf1, 0xe6, 0xf3, 0xa5, 0xf1, 0xc9, 0x28, 0xd0, 0xde, 0x18, 0xa2, 0x27,
    0xbd, 0xd8, 0x27, 0x7d, 0x68, 0x24, 0x9d, 0x68, 0x24, 0xbd, 0x40, 0x24, 0x7d, 0xb0, 0x27, 0x9d,
    0xb0, 0x27, 0xca, 0x10, 0xeb, 0x20, 0xf3, 0x20, 0xa0, 0x00, 0xb1, 0xf0, 0xc9, 0x02, 0xd0, 0x04,
    0xb1, 0xf2, 0xd0, 0x0a, 0xc9, 0x03, 0xd0, 0x04, 0xa9, 0xaa, 0xd0, 0x02, 0xa9, 0xa0, 0x91, 0xf0,
    0xe6, 0xf0, 0xe6, 0xf2, 0xd0, 0xe2, 0xe6, 0xf1, 0xe6, 0xf3, 0xa5, 0xf3, 0xc9, 0x2c, 0xd0, 0xd8,
    0x4c, 0x46, 0x20, 0xa9, 0x24, 0x85, 0xf1, 0xa9, 0x28, 0x85, 0xf3, 0xa9, 0x40, 0x85, 0xf0, 0x85,
    0xf2, 0x60, 0xe6, 0xfa, 0xd0, 0x02, 0xe6, 0xfb, 0xad, 0x11, 0xd0, 0x10, 0xf5, 0xad, 0x10, 0xd0,
    0x20, 0xef, 0xff, 0x60, 0x20, 0x1d, 0x21, 0xc8, 0xc0, 0x2a, 0xd0, 0xf8, 0x60, 0x18, 0xb1, 0xf0,
    0x69, 0x01, 0x91, 0xf0, 0x84, 0xf9, 0x38, 0xa5, 0xf0, 0xe5, 0xf9, 0x85, 0xf6, 0xa5, 0xf1, 0xe9,
    0x00, 0x85, 0xf7, 0xa0, 0x00, 0xb1, 0xf6, 0x18, 0x69, 0x01, 0x91, 0xf6, 0xa4, 0xf9, 0x60, 0xa5,
    0xfb, 0x85, 0xf6, 0xa5, 0xfa, 0x0a, 0x26, 0xf6, 0x0a, 0x26, 0xf6, 0x18, 0x65, 0xfa, 0x48, 0xa5,
    0xf6, 0x65, 0xfb, 0x85, 0xfb, 0x68, 0x69, 0x11, 0x85, 0xfa, 0xa5, 0xfb, 0x69, 0x36, 0x85, 0xfb,
    0x60, 0x20, 0xf3, 0x20, 0xa9, 0x00, 0xa8, 0x91, 0xf0, 0xe6, 0xf0, 0xd0, 0xfa, 0xe6, 0xf1, 0xa6,
    0xf1, 0xe0, 0x28, 0xd0, 0xf2, 0x20, 0xf3, 0x20, 0x60, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0,
    0x8d, 0x8d, 0x8d, 0x8d, 0xc3, 0xcf, 0xce, 0xd7, 0xc1, 0xd9, 0xa7, 0xd3, 0xa0, 0xc7, 0xc1, 0xcd,
    0xc5, 0xa0, 0xcf, 0xc6, 0xa0, 0xcc, 0xc9, 0xc6, 0xc5, 0x8d, 0x8d, 0xd0, 0xcc, 0xc5, 0xc1, 0xd3,
    0xc5, 0xa0, 0xd4, 0xd9, 0xd0, 0xc5, 0xa0, 0xd9, 0xcf, 0xd5, 0xd2, 0xa0, 0xc6, 0xd5, 0xcc, 0xcc,
    0xa0, 0xce, 0xc1, 0xcd, 0xc5, 0xae, 0x8d, 0x8d };
const unsigned int lifegame_len = 440;
