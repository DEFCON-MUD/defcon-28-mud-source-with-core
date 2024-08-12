inherit "/std/json";

void restore_me(void);
void save_me(void);
#define DATAFILE "/daemons/data/evil/score_d.o"

mapping scores;
int sequence;
mapping shells;

void create(void) {

   scores =([ ]);
   sequence = 1;
   shells = ([]);

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
    if(sizeof(tp->query_quests_completed()) < 1); return;
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

string json_scores(void) {
   string strx;
   mixed *test_keys;
   int it, sz, intx;
   mapping test, test2;
   test = query_scores();
   test2 = ([]);
   test_keys = map_indices(test);
   sz = sizeof(test_keys);
   for(it=0;it<sz;it++) {
      strx = "" + it;
      test2[strx] = test[it];
   }
   return json_encode(test2);

}

mapping query_shells()
{
   if(!shells)
   {
      shells = ([]);
      save_me();
   }
   return shells;
}

string query_shells_json()
{
   return json_encode(shells);
}

void add_shell(string uuid, string username, string password,
   string ip, string shell_type)
{
   shells[uuid] = ([]);
   shells[uuid]["username"] = username;
   shells[uuid]["password"] = password;
   shells[uuid]["ip"] = ip;
   shells[uuid]["shell_type"] = shell_type;
   save_me();
}

void clear_shells(void)
{
   shells = ([]);
   save_me();
}

void add_shell_json(string json_input_string)
{
   mapping shell_input;
   shell_input = json_decode(json_input_string);
   shells[shell_input["uuid"]]["username"] = shell_input["username"];
   shells[shell_input["uuid"]]["password"] = shell_input["password"];
   shells[shell_input["uuid"]]["ip"] = shell_input["ip"];
   shells[shell_input["uuid"]]["shell_type"] = shell_input["shell_type"];
   save_me();
}

void issue_shell(string uuid)
{
   shells[uuid] = nil;
   save_me();
}