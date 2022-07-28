inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 40, 5 }));
  set_short( "Passage - x59y40z5" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y40z5.c",
  "east" : DIR+"/rooms/x60y40z5.c",
  "north" : DIR+"/rooms/x59y41z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
