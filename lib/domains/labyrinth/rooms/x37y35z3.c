inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 35, 3 }));
  set_short( "Passage - x37y35z3" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y36z3.c",
  "south" : DIR+"/rooms/x37y34z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
