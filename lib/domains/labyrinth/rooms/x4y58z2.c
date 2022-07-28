inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 58, 2 }));
  set_short( "Corridor - x4y58z2" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y58z2.c",
  "east" : DIR+"/rooms/x5y58z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
