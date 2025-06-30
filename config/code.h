// US配列 → JIS配列対応：キーコード変換表（ZMK用）
// 目的：US物理キーボードを使って、JISキーボード通りの記号を入力するための変換
// ASSYM(shifted, keycode) で使う前提（Shift押しキー用のマクロ）
#pragma once
#define RO 0x87  // JISキーボード「ろ」キー（¥）

// === ✅ keys.h に存在しないが必要なキー定義（存在しない場合のみ追加） ===
// なし（SCOLON は削除済み）

// === ✅ JIS記号 → US物理キーボード入力に対応したマクロ定義（ASSYM形式用） ===

#define JP_MINUS        MINUS             // ほキー（通常: -）✅ 出力OK（修正不要）
#define S_EQUAL         LS(N0)            // ほキー（Shift: =）✅ 修正済み

#define JP_SEMI         SEMICOLON         // れキー（通常: ;）
#define S_PLUS          LS(SEMICOLON)     // れキー（Shift: +）✅ 修正済み

#define JP_COLON        COLON             // けキー（通常: :）
#define S_ASTERISK      LS(COLON)         // けキー（Shift: *）✅ 修正済み

#define JP_CARET        EQUAL             // へキー（通常: ^）✅ 修正済み
#define S_TILDE         LS(EQUAL)         // へキー（Shift: ~）✅ 修正済み

#define JP_AT           LEFT_BRACKET      // @キー（通常: @）✅ 修正済み
#define S_BQ            NO_OP             // @キー（Shift: `）※未対応記号のため NO_OP

#define JP_BACKSLASH    RO                // ろキー（通常: \）✅ 修正済み
#define S_UNDERSCORE    UNDERSCORE        // ろキー（Shift: _）

#define JP_YEN          RO                // ¥キー（代替）✅ 修正済み
#define S_PIPE          PIPE              // ¥キー（Shift: |）

#define JP_LBRACKET     LEFT_BRACKET      // [キー（通常: [）
#define S_LBRACKET      LEFT_BRACE        // [キー（Shift: {）

#define JP_RBRACKET     RIGHT_BRACKET     // ]キー（通常: ]）
#define S_RBRACKET      RIGHT_BRACE       // ]キー（Shift: }）

#define JP_SLASH        SLASH             // めキー（通常: /）
#define S_QUESTION      QUESTION          // めキー（Shift: ?）

#define JP_COMMA        COMMA             // ねキー（通常: ,）
#define S_LESS_THAN     LESS_THAN         // ねキー（Shift: <）

#define JP_DOT          DOT               // るキー（通常: .）
#define S_GREATER_THAN  GREATER_THAN      // るキー（Shift: >）

#define S_DQUOTE        LS(N2)            // JIS配列での "（US配列では @ の位置）✅ 修正済み

// Windows設定（記号出力ではないため、変換チェック対象外）
#define ZENNANKAKU      CAPSLOCK      // Alt + CapsLock（半角全角切替）

// === ✅ 変換不要（JIS/US共通）の記号一覧 ===
// 以下は &kp でそのまま使える記号。ASSYMやdefine不要。
// 確認・記録のためにここに明記します。

// #define N1         // !（共通: Shift+1）
// #define N2         // "（共通: Shift+2）
// #define N3         // #（共通: Shift+3）
// #define N4         // $（共通: Shift+4）
// #define N5         // %（共通: Shift+5）
// #define N6         // &（共通: Shift+6）
// #define N7         // '（共通: Shift+7）
// #define N8         // (（共通: Shift+8）
// #define N9         // )（共通: Shift+9）
// #define N0         // 0（共通）
// #define GRAVE      // `（共通）
// #define EQUAL      // =（共通）
// #define MINUS      // -（共通）
// #define SEMICOLON  // ;（共通）
// #define COLON      // :（共通）
// #define COMMA      // ,（共通）
// #define DOT        // .（共通）
// #define SLASH      // /（共通）
// #define QUESTION   // ?（共通）
// #define LBKT       // [（共通）
// #define LEFT_BRACE // {（共通）
// #define RBKT       // ]（共通）
// #define RIGHT_BRACE // }（共通）
// #define PIPE       // |（共通）
// #define UNDERSCORE // _（共通）
// #define LESS_THAN  // <（共通）
// #define GREATER_THAN // >（共通）
// #define TILDE      // ~（共通）
// #define DQUOTE     // "（共通）


// === ⚠️ US配列前提でのみ共通の記号一覧（JIS配列では異なる結果になるため注意） ===
// 以下は &kp でそのまま使うと「JIS配列では意図しない記号が出る」例です。
// この定義ファイルでは使用しないことを推奨

// #define AT_SIGN     // US: @ → JISでは " が出る
// #define ASTERISK    // US: * → JISでは + が出る
// #define CARET       // US: ^ → JISでは 6 が出る
// #define PLUS        // US: + → JISでは * が出る
// #define BACKSLASH   // US: \ → JISでは ] が出る可能性あり
// #define NON_US_BACKSLASH // US: ¥ → JISでは \ が出る

// === 🍎 Mac専用：ZMK + US配列 → JIS記号補正マクロ ===
// 環境依存で出力が異なるキーを、Macでの出力に合わせる補助定義
// 使用例: ASSYM(S_TILDE_MAC, JP_CARET)

#define S_TILDE_MAC         LS(SEMICOLON)     // Macでは ~ は Shift + ;（けキー）
#define JP_YEN_MAC          NON_US_BACKSLASH  // Macでは ¥ は NON_US_BACKSLASH のままで出る
#define S_BQ_MAC            GRAVE             // Macでは ` が正しく出る（WindowsではIME切替）

