inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 28, 5 }));
  set_short( "Passage - x58y28z5" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y28z5.c",
  "east" : DIR+"/rooms/x59y28z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
