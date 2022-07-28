inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 6 }));
  set_short( "Hallway - x59y22z6" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y23z6.c",
  "south" : DIR+"/rooms/x59y21z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
