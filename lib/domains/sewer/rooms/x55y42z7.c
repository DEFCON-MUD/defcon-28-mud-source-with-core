inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 7 }));
  set_short( "Hallway - x55y42z7" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y42z7.c",
  "south" : DIR+"/rooms/x55y41z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
