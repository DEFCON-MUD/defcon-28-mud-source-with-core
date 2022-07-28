inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 14, 7 }));
  set_short( "Hallway - x3y14z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y14z7.c",
  "east" : DIR+"/rooms/x4y14z7.c",
  "north" : DIR+"/rooms/x3y15z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
