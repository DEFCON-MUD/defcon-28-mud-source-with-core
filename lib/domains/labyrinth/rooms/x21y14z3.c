inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 3 }));
  set_short( "Hallway - x21y14z3" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y14z3.c",
  "south" : DIR+"/rooms/x21y13z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
