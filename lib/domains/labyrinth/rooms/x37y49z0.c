inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 49, 0 }));
  set_short( "Hallway - x37y49z0" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y50z0.c",
  "south" : DIR+"/rooms/x37y48z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
