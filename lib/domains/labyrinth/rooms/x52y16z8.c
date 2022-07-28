inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 16, 8 }));
  set_short( "Hallway - x52y16z8" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y16z8.c",
  "east" : DIR+"/rooms/x53y16z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
