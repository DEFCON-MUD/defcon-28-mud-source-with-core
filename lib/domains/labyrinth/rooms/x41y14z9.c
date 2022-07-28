inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 9 }));
  set_short( "Hallway - x41y14z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y14z9.c",
  "south" : DIR+"/rooms/x41y13z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
