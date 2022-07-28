inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 60, 3 }));
  set_short( "Corridor - x57y60z3" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y60z3.c",
  "south" : DIR+"/rooms/x57y59z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
