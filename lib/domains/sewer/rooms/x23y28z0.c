inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 28, 0 }));
  set_short( "Hallway - x23y28z0" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y29z0.c",
  "south" : DIR+"/rooms/x23y27z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
