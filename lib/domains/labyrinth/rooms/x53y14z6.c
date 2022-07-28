inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 14, 6 }));
  set_short( "Hallway - x53y14z6" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y14z6.c",
  "east" : DIR+"/rooms/x54y14z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
