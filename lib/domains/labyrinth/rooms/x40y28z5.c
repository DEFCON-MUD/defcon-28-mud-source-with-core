inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 28, 5 }));
  set_short( "Hallway - x40y28z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y28z5.c",
  "east" : DIR+"/rooms/x41y28z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
