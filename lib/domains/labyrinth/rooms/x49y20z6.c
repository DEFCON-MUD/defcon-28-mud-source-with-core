inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 20, 6 }));
  set_short( "Hallway - x49y20z6" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y20z6.c",
  "east" : DIR+"/rooms/x50y20z6.c",
  "south" : DIR+"/rooms/x49y19z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
