inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 53, 2 }));
  set_short( "Hallway - x27y53z2" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y54z2.c",
  "south" : DIR+"/rooms/x27y52z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
