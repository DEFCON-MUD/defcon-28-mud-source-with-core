inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 53, 4 }));
  set_short( "Hallway - x3y53z4" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y54z4.c",
  "south" : DIR+"/rooms/x3y52z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
