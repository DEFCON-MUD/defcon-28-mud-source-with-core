inherit serialize M_SERIALIZE;

void restore_me(void);
void save_me(void);
#define DATAFILE "/daemons/data/evil/score_d.o"

mapping scores;
int sequence;

void create(void) {

   scores =([ ]);
   sequence = 1;

   if (file_exists(DATAFILE)) {
      restore_me();
   } else {
      /* Create a default list if we do not already have one. */

    save_me();
   }
}

int issue_sequence() {
    sequence++;
    save_me();
    return sequence;
}

int query_sequence() {
    return sequence;
}

void reset_sequence() {
    sequence = 0;
    save_me();
}

static void restore_me(void) {
   unguarded("restore_object", DATAFILE);

}

static void save_me(void) {
   unguarded("save_object", DATAFILE);
}

void set_score(string playername) {
    object tp;
    int player_sequence;

    tp = USER_D->find_player(playername);
    player_sequence = tp->query_sequence();
    scores[player_sequence] = ([]);
    scores[player_sequence]["name"] = playername; 
    scores[player_sequence]["quests"] = tp->query_quests_completed();
    scores[player_sequence]["age"] = tp->query_age_in_seconds();
    scores[player_sequence]["level"] = tp->query_level();
    scores[player_sequence]["admin"] = query_admin(tp);
    scores[player_sequence]["wizard"] = query_wizard(tp);
    scores[player_sequence]["difficulty"] = tp->query_difficulty();
    save_me();
}

void clear_scores(void) {
    scores = ([]);
    save_me();
}

mapping query_scores(void) {
   return scores;
}

