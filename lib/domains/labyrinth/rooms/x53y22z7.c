inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 7 }));
  set_short( "Hallway - x53y22z7" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y22z7.c",
  "east" : DIR+"/rooms/x54y22z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
