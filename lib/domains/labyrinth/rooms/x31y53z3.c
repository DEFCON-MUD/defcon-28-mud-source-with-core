inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 53, 3 }));
  set_short( "Hallway - x31y53z3" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y54z3.c",
  "south" : DIR+"/rooms/x31y52z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
