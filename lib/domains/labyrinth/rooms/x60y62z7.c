inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 7 }));
  set_short( "Corridor - x60y62z7" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z7.c",
  "east" : DIR+"/rooms/x61y62z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
