inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 17, 2 }));
  set_short( "Corridor - x1y17z2" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y18z2.c",
  "south" : DIR+"/rooms/x1y16z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
