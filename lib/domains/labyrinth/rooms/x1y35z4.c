inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 35, 4 }));
  set_short( "Hallway - x1y35z4" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y36z4.c",
  "south" : DIR+"/rooms/x1y34z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
