inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 6 }));
  set_short( "Hallway - x57y40z6" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y40z6.c",
  "north" : DIR+"/rooms/x57y41z6.c",
  "south" : DIR+"/rooms/x57y39z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
