inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 5, 1 }));
  set_short( "Corridor - x35y5z1" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y6z1.c",
  "south" : DIR+"/rooms/x35y4z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
