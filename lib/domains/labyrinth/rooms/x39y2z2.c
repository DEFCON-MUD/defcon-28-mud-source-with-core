inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 2, 2 }));
  set_short( "Passage - x39y2z2" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y2z2.c",
  "east" : DIR+"/rooms/x40y2z2.c",
  "north" : DIR+"/rooms/x39y3z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
