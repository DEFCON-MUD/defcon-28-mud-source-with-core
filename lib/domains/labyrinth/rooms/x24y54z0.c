inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 54, 0 }));
  set_short( "Corridor - x24y54z0" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y54z0.c",
  "east" : DIR+"/rooms/x25y54z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
