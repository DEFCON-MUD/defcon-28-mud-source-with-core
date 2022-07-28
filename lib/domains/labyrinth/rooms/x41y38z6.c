inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 38, 6 }));
  set_short( "Corridor - x41y38z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y38z6.c",
  "east" : DIR+"/rooms/x42y38z6.c",
  "south" : DIR+"/rooms/x41y37z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
