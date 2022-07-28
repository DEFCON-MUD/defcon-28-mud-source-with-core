inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 19, 1 }));
  set_short( "Corridor - x1y19z1" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y20z1.c",
  "south" : DIR+"/rooms/x1y18z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
