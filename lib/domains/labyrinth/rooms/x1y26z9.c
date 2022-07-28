inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 26, 9 }));
  set_short( "Corridor - x1y26z9" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y27z9.c",
  "south" : DIR+"/rooms/x1y25z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
