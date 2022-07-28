inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 22, 8 }));
  set_short( "Hallway - x47y22z8" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y22z8.c",
  "south" : DIR+"/rooms/x47y21z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
