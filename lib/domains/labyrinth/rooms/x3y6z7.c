inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 6, 7 }));
  set_short( "Passage - x3y6z7" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y6z7.c",
  "north" : DIR+"/rooms/x3y7z7.c",
  "south" : DIR+"/rooms/x3y5z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
