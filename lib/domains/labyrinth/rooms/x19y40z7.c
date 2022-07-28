inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 40, 7 }));
  set_short( "Corridor - x19y40z7" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y40z7.c",
  "north" : DIR+"/rooms/x19y41z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
