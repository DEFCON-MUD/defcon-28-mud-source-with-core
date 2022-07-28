inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 2 }));
  set_short( "Hallway - x1y60z2" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y61z2.c",
  "south" : DIR+"/rooms/x1y59z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
