inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 35, 3 }));
  set_short( "Passage - x35y35z3" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y36z3.c",
  "south" : DIR+"/rooms/x35y34z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
