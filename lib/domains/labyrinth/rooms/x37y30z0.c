inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 0 }));
  set_short( "Hallway - x37y30z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y30z0.c",
  "south" : DIR+"/rooms/x37y29z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
