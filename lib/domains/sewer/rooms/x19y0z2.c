inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 0, 2 }));
  set_short( "Corridor - x19y0z2" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y0z2.c",
  "east" : DIR+"/rooms/x20y0z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
