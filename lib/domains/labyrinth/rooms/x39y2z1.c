inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 2, 1 }));
  set_short( "Hallway - x39y2z1" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y2z1.c",
  "east" : DIR+"/rooms/x40y2z1.c",
  "north" : DIR+"/rooms/x39y3z1.c",
  "south" : DIR+"/rooms/x39y1z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
