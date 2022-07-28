inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 1 }));
  set_short( "Hallway - x23y33z1" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z1.c",
  "south" : DIR+"/rooms/x23y32z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
