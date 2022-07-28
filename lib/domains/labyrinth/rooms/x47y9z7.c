inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 9, 7 }));
  set_short( "Hallway - x47y9z7" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y10z7.c",
  "south" : DIR+"/rooms/x47y8z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
