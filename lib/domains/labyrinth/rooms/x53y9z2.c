inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 9, 2 }));
  set_short( "Hallway - x53y9z2" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y10z2.c",
  "south" : DIR+"/rooms/x53y8z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
