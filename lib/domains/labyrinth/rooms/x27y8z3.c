inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 3 }));
  set_short( "Hallway - x27y8z3" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y9z3.c",
  "south" : DIR+"/rooms/x27y7z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
