inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 30, 6 }));
  set_short( "Hallway - x59y30z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y30z6.c",
  "east" : DIR+"/rooms/x60y30z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
