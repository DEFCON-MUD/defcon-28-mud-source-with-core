inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 54, 8 }));
  set_short( "Hallway - x52y54z8" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y54z8.c",
  "east" : DIR+"/rooms/x53y54z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
