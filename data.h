#if !defined(DATA_INCLUDED)
#  define DATA_INCLUDED
extern SHARED *shared;
extern char version[8];
extern PLAYING_MODE mode;
extern int batch_mode;
extern int swindle_mode;
extern int call_flag;
extern int crafty_rating;
extern int opponent_rating;
extern int time_used;
extern int time_used_opponent;
extern BITBOARD total_moves;
extern int initialized;
extern int early_exit;
extern int new_game;
extern char *AK_list[128];
extern char *GM_list[128];
extern char *IM_list[128];
extern char *C_list[128];
extern char *B_list[128];
extern char *SP_list[128];
extern char *SP_opening_filename[128];
extern char *SP_personality_filename[128];
extern FILE *input_stream;
extern FILE *dbout;
extern FILE *book_file;
extern FILE *books_file;
extern FILE *normal_bs_file;
extern FILE *computer_bs_file;
extern FILE *history_file;
extern FILE *log_file;
extern FILE *auto_file;
extern FILE *position_file;
extern int log_id;
extern int output_format;
#  if !defined(NOEGTB)
extern int EGTBlimit;
extern int EGTB_draw;
extern int EGTB_search;
extern int EGTB_use;
extern void *EGTB_cache;
extern size_t EGTB_cache_size;
extern int EGTB_setup;
#  endif
extern int done;
extern int last_mate_score;
extern int last_opponent_move;
extern int incheck_depth;
extern int onerep_depth;
extern int mate_depth;
extern int null_min;
extern int null_max;
extern int reduce_min_depth;
extern int reduce_value;
extern int pgn_suggested_percent;
extern char pgn_event[128];
extern char pgn_date[128];
extern char pgn_round[128];
extern char pgn_site[128];
extern char pgn_white[128];
extern char pgn_white_elo[128];
extern char pgn_black[128];
extern char pgn_black_elo[128];
extern char pgn_result[128];
extern char log_filename[64];
extern char history_filename[64];
extern int number_of_solutions;
extern int solutions[10];
extern int solution_type;
extern int abs_draw_score;
extern int accept_draws;
extern int offer_draws;
extern int adaptive_hash;
extern size_t adaptive_hash_min;
extern size_t adaptive_hash_max;
extern size_t adaptive_hashp_min;
extern size_t adaptive_hashp_max;
extern int over;
extern int silent;
extern int ics;
extern int xboard;
extern int pong;
extern int channel;
extern char channel_title[32];
extern char book_path[128];
extern char personality_path[128];
extern char log_path[128];
extern char tb_path[128];
extern char rc_path[128];
extern char cmd_buffer[4096];
extern char *args[256];
extern char buffer[512];
extern unsigned char convert_buff[8];
extern int nargs;
extern int kibitz;
extern int wtm;
extern int last_search_value;
extern int lazy_eval_cutoff;
extern int ponder_value;
extern int move_actually_played;
extern int analyze_mode;
extern int annotate_mode;
extern int input_status;        /* 0=no input;
                                   1=predicted move read;
                                   2=unpredicted move read;
                                   3=something read, not executed. */
extern int resign;
extern int resign_counter;
extern int resign_count;
extern int draw_counter;
extern int draw_count;
extern int draw_offer_pending;
extern int draw_offered;
extern char audible_alarm;
extern char speech;
extern char hint[512];
extern char book_hint[512];
extern int post;
extern int search_depth;
extern unsigned int search_nodes;
extern unsigned int temp_search_nodes;
extern int search_move;
extern int ponder;
extern int ponder_move;
extern int force;
extern int ponder_moves[220];
extern int num_ponder_moves;
extern char initial_position[80];
extern int predicted;
extern int ansi;
extern int trace_level;
extern int book_move;
extern int book_accept_mask;
extern int book_reject_mask;
extern int book_random;
extern float book_weight_freq;
extern float book_weight_eval;
extern float book_weight_learn;
extern int book_search_trigger;
extern int book_selection_width;
extern int show_book;
extern int learning;
extern int book_learn_eval[LEARN_INTERVAL];
extern int book_learn_depth[LEARN_INTERVAL];
extern int learn_seekto[64];
extern BITBOARD learn_key[64];
extern int learn_nmoves[64];
extern BITBOARD book_learn_key;
extern int learn_positions_count;
extern int book_learn_nmoves;
extern int book_learn_seekto;
extern int usage_level;
extern int log_hash;
extern int log_pawn_hash;
extern size_t hash_table_size;
extern size_t pawn_hash_table_size;
extern int hash_mask;
extern unsigned int pawn_hash_mask;
extern HASH_ENTRY *trans_ref;
extern PAWN_HASH_ENTRY *pawn_hash_table;
extern size_t cb_trans_ref;
extern size_t cb_pawn_hash_table;
extern const int p_values[13];
extern const int pc_values[7];
extern const int p_vals[7];
extern const int pieces[2][7];
extern PATH last_pv;
extern int last_value;
extern const char translate[13];
extern const char empty_sqs[9];
extern const char square_color[64];
extern int outpost[2][64];
extern int passed_pawn_value[2][8];
extern int connected_passed_pawn_value[2][8];
extern int hidden_passed_pawn_value;
extern int blockading_passed_pawn_value[2][8];
extern int doubled_pawn_value[9];
extern int supported_passer[2][8];
extern int outside_passed;
extern int pawn_defects[2][8];
extern int open_file[8];
extern int half_open_file[8];
extern int king_tropism_n[8];
extern int king_tropism_b[8];
extern int king_tropism_r[8];
extern int king_tropism_q[8];
extern int friendly_q[8];
extern int pval[2][64];
extern int nval[64];
extern int qval[64];
extern int kval_n[2][64];
extern int kval_k[2][64];
extern int kval_q[2][64];
extern int king_safety[16][16];
extern int safety_vector[16];
extern int tropism_vector[16];
extern const char b_n_mate_dark_squares[64];
extern const char b_n_mate_light_squares[64];
extern const int mate[64];
extern BITBOARD magic_rook[64];
extern BITBOARD magic_rook_mask[64];
extern unsigned magic_rook_shift[64];
extern BITBOARD mobility_mask_b[4];
extern BITBOARD mobility_mask_r[4];
extern BITBOARD *magic_rook_indices[64];
extern BITBOARD magic_rook_table[102400];
extern BITBOARD magic_bishop[64];
extern BITBOARD magic_bishop_mask[64];
extern unsigned magic_bishop_shift[64];
extern BITBOARD *magic_bishop_indices[64];
extern BITBOARD magic_bishop_table[5248];
extern signed char directions[64][64];
extern BITBOARD pawn_attacks[2][64];
extern BITBOARD knight_attacks[64];
extern POSITION display;
extern BITBOARD king_attacks[64];
extern BITBOARD obstructed[64][64];
extern BITBOARD randoms[2][7][64];
extern BITBOARD castle_random[2][2];
extern BITBOARD enpassant_random[65];
extern BITBOARD wtm_random[2];
extern BITBOARD clear_mask[65];
extern BITBOARD set_mask[65];
extern BITBOARD file_mask[8];
extern BITBOARD rank_mask[8];
extern BITBOARD OO[2];
extern BITBOARD OOO[2];
extern BITBOARD virgin_center_pawns;
extern BITBOARD mask_efgh, mask_fgh, mask_abc, mask_abcd;
extern BITBOARD mask_advance_2_w;
extern BITBOARD mask_advance_2_b;
extern BITBOARD mask_left_edge;
extern BITBOARD mask_right_edge;
extern BITBOARD mask_not_edge;
extern BITBOARD mask_kr_trapped[2][3];
extern BITBOARD mask_qr_trapped[2][3];
extern BITBOARD light_squares;
extern BITBOARD dark_squares;
extern BITBOARD not_rook_pawns;
extern BITBOARD plus1dir[65];
extern BITBOARD plus7dir[65];
extern BITBOARD plus8dir[65];
extern BITBOARD plus9dir[65];
extern BITBOARD minus1dir[65];
extern BITBOARD minus7dir[65];
extern BITBOARD minus8dir[65];
extern BITBOARD minus9dir[65];
extern BITBOARD mask_eptest[64];
extern BITBOARD mask_clear_entry;
#  if !defined(_M_AMD64) && !defined (_M_IA64) && !defined(INLINE32)
extern unsigned char msb[65536];
extern unsigned char lsb[65536];
#  endif
extern unsigned char msb_8bit[256];
extern unsigned char lsb_8bit[256];
extern unsigned char islands[256];
extern unsigned char pop_cnt_8bit[256];
extern unsigned char connected_passed[256];
extern unsigned char file_spread[256];
extern signed char is_outside[256][256];
extern signed char is_outside_c[256][256];
extern BITBOARD mask_pawn_protected[2][64];
extern BITBOARD mask_pawn_duo[64];
extern BITBOARD mask_pawn_isolated[64];
extern BITBOARD mask_pawn_passed[2][64];
extern BITBOARD mask_no_pattacks[2][64];
extern BITBOARD mask_hidden_left[2][8];
extern BITBOARD mask_hidden_right[2][8];
extern BITBOARD pawn_race[2][2][64];
extern BITBOARD pawn_race[2][2][64];
extern BOOK_POSITION book_buffer[BOOK_CLUSTER_SIZE];
extern BOOK_POSITION book_buffer_char[BOOK_CLUSTER_SIZE];
extern const int rankflip[2][8];
extern const int sqflip[2][64];
extern const BITBOARD rank12[2];
extern const int sign[2];
extern int direction[2];
extern int dark_corner[2];
extern int light_corner[2];
extern int OOsqs[2][3];
extern int OOOsqs[2][3];
extern int OOfrom[2];
extern int OOto[2];
extern int OOOto[2];
extern int epsq[2];
extern int rook_A[2];
extern int rook_D[2];
extern int rook_F[2];
extern int rook_G[2];
extern int rook_H[2];
extern int capleft[2];
extern int capright[2];
extern int pawnadv1[2];
extern int pawnadv2[2];
#  if !defined(NOEGTB)
extern int cbEGTBCompBytes;
#  endif
extern int pawn_value;
extern int knight_value;
extern int bishop_value;
extern int rook_value;
extern int queen_value;
extern int king_value;
extern int piece_values[2][7];
extern int bad_trade;
extern int dented_armor;
extern int dented_armor_q;
extern int protected_pawn_eg_bonus;
extern int wtm_bonus;
extern int gen_trop;
extern int gen_trop_mid;
extern int max_pair_b;
extern int pair_b_min;
extern int lower_b1;
extern int lower_b2;
extern int lower_r;
extern int lower_r_percent;
extern int supports_slider;
extern int attacks_enemy;
extern int mobility_score_b[4];
extern int mobility_score_r[4];
extern int undeveloped_piece;
extern int friendly_queen[8];
extern int pawn_can_promote;
extern int eight_pawns;
extern int pawns_blocked;
extern int pawn_duo;
extern int pawn_weak[9];
extern int pawn_islands[5];
extern int won_kp_ending[8];
extern int split_passed;
extern int pawn_advance[8];
extern int king_king_tropism;
extern int bishop_trapped;
extern int slider_with_wing_pawns;
extern int rook_on_7th;
extern int rook_connected_7th_rank;
extern int rook_open_file[9][8];
extern int rook_reaches_open_file;
extern int rook_half_open_file;
extern int rook_behind_passed_pawn;
extern int rook_trapped;
extern int queen_rook_on_7th_rank;
extern int queen_offside;
extern int king_safety_mate_threat;
extern int development_thematic;
extern int blocked_center_pawn;
extern int development_losing_castle;
extern int development_not_castled;
extern struct eval_term eval_packet[256];
#endif
