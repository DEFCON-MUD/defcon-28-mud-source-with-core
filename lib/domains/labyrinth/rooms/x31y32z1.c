inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 1 }));
  set_short( "Corridor - x31y32z1" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y32z1.c",
  "east" : DIR+"/rooms/x32y32z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
