inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 6 }));
  set_short( "Passage - x47y48z6" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y48z6.c",
  "east" : DIR+"/rooms/x48y48z6.c",
  "north" : DIR+"/rooms/x47y49z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
