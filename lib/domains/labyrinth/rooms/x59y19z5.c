inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 19, 5 }));
  set_short( "Hallway - x59y19z5" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y20z5.c",
  "south" : DIR+"/rooms/x59y18z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
