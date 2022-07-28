inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 14, 4 }));
  set_short( "Hallway - x54y14z4" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y14z4.c",
  "east" : DIR+"/rooms/x55y14z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
