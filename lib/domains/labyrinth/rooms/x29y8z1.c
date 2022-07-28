inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 1 }));
  set_short( "Hallway - x29y8z1" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y9z1.c",
  "south" : DIR+"/rooms/x29y7z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
