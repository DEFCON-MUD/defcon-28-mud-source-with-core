inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 62, 8 }));
  set_short( "Hallway - x24y62z8" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y62z8.c",
  "east" : DIR+"/rooms/x25y62z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
