inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 64, 6 }));
  set_short( "Corridor - x11y64z6" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y64z6.c",
  "east" : DIR+"/rooms/x12y64z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
