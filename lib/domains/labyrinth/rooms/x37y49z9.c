inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 49, 9 }));
  set_short( "Hallway - x37y49z9" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y50z9.c",
  "south" : DIR+"/rooms/x37y48z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
