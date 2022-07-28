inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 2, 5 }));
  set_short( "Hallway - x53y2z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y2z5.c",
  "north" : DIR+"/rooms/x53y3z5.c",
  "south" : DIR+"/rooms/x53y1z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
