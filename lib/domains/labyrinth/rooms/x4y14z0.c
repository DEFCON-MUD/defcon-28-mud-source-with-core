inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 14, 0 }));
  set_short( "Hallway - x4y14z0" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y14z0.c",
  "east" : DIR+"/rooms/x5y14z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
