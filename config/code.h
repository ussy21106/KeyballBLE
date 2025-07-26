// US配列 → JIS配列対応：キーコード変換表（ZMK用）
// 目的：US物理キーボードを使って、JISキーボード通りの記号を入力するための変換
// ASSYM(shifted, keycode) で使う前提（Shift押しキー用のマクロ）
#pragma once
#define RO 0x87  // JISキーボード「ろ」キー（¥）

// === 🍎 Mac専用：ZMK + US配列 → JIS記号補正マクロ ===
// 環境依存で出力が異なるキーを、Macでの出力に合わせる補助定義
// 使用例: ASSYM(S_TILDE_MAC, JP_CARET)
//#define JP_YEN_MAC          NON_US_BACKSLASH  // Macでは ¥ は NON_US_BACKSLASH のままで出る
//#define S_BQ_MAC            GRAVE             // Macでは ` が正しく出る（WindowsではIME切替）

// === ✅ keys.h に存在しないが必要なキー定義（存在しない場合のみ追加） ===
// なし（SCOLON は削除済み）

// === ✅ JIS記号 → US物理キーボード入力に対応したマクロ定義 ===
// 1行目（数字キー行）
#define JP_ZKHK   GRAVE     // 半角/全角

#define JP_1      N1        // 1
#define S_JP_1    LS(N1)    // !
#define S_EXCL    S_JP_1    // !

#define JP_2      N2        // 2
#define S_JP_2    LS(N2)    // "
#define S_DQUO    S_JP_2    // "


#define JP_3      N3        // 3
#define S_JP_3    LS(N3)    // #
#define S_HASH    S_JP_3    // #

#define JP_4      N4        // 4
#define S_JP_4    LS(N4)    // $
#define S_DLR    S_JP_4   // $

#define JP_5      N5        // 5
#define S_JP_5    LS(N5)    // %
#define S_PERC   S_JP_5   // %

#define JP_6      N6        // 6
#define S_JP_6    LS(N6)    // &
#define S_AMPR   S_JP_6   // &

#define JP_7      N7        // 7
#define S_JP_7    LS(N7)    // '
#define S_QUOT   S_JP_7   // '

#define JP_8      N8        // 8
#define S_JP_8    LS(N8)    // (
#define JP_LPAR   S_JP_8   // (
#define S_LPRN    JP_LPAR   // (

#define JP_9      N9        // 9
#define S_JP_9    LS(N9)    // )
#define JP_RPAR   S_JP_9   // )
#define S_RPRN    JP_RPAR   // )

#define JP_0      N0        // 0


#define JP_MINS   MINUS     // -
#define JP_EQL    LS(JP_MINS) // =
#define S_EQL     JP_EQL // =

#define JP_CIRC   EQUAL     // ^
#define S_JP_CIRC LS(JP_CIRC) // ~ (Shift+^)
#define S_TILDE   S_JP_CIRC // ~

#define JP_YEN      0x89      // ¥
#define JP_YEN_MAC  JP_YEN  // Macでは ¥ は NON_US_BACKSLASH のままで出る
#define S_PIPE      LS(JP_YEN) // |


// 2行目（QWERTY行）
#define JP_AT     LBKT      // @
#define S_JP_AT   LS(LBKT)  // `
#define S_BQ     S_JP_AT   // `
#define S_BQ_MAC  GRAVE     // Macでは ` が正しく出る（WindowsではIME切替）

#define JP_LBKT   RBKT      // [
#define S_JP_LBKT LS(JP_LBKT)  // {
#define S_LCBR   S_JP_LBKT // {

// 3行目（ASDF行）
#define JP_SCLN   SEMI      // ;
#define S_JP_SCLN LS(JP_SCLN)  // +
#define S_PLUS   S_JP_SCLN // +

#define JP_COLN   QUOT      // :
#define S_JP_COLN LS(JP_COLN)  // *
#define S_ASTR   S_JP_COLN // *

#define JP_RBKT   BSLH      // ]
#define S_JP_RBKT LS(JP_RBKT)  // }
#define S_RCBR   S_JP_RBKT // }

// 4行目（ZXCV行）
#define JP_COMMA  COMMA     // ,
#define S_LESS_THAN   LS(JP_COMMA)   // <
#define JP_DOT    DOT       // .
#define S_GREATER_THAN     LS(JP_DOT)   // >
#define JP_SLASH  SLASH     // /
#define S_QUESTION LS(JP_SLASH) // ?
#define JP_BSLS   0x89     // backslash(¥)
#define S_JP_BSLS LS(RO) // _
#define S_UNDS   S_JP_BSLS // _


// 特殊キー
#define JP_HENK   INT4      // 変換
#define JP_MHEN   INT5      // 無変換
#define JP_KANA   INT2      // カタカナ/ひらがな

// その他のエイリアス
#define JP_LBRC   S_JP_LBKT  // {
#define JP_RBRC   S_JP_RBKT  // }
#define JP_SEMI   JP_SCLN  // ;
#define JP_COLON  JP_COLN  // :
#define JP_STAR   S_JP_COLN  // *
#define JP_UNDER  S_JP_BSLS  // _
#define JP_BSLASH JP_BSLS  // Backslash 
#define JP_GRAVE  S_JP_AT   // `
#define JP_DQUOT  S_DQUO  // "
#define JP_SQUOT  S_QUOT  // '



