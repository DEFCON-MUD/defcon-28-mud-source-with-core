inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 3 }));
  set_short( "Passage - x5y28z3" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y28z3.c",
  "north" : DIR+"/rooms/x5y29z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
