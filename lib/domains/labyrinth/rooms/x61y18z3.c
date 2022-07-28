inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 18, 3 }));
  set_short( "Passage - x61y18z3" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y19z3.c",
  "south" : DIR+"/rooms/x61y17z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
