inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 4, 9 }));
  set_short( "Corridor - x1y4z9" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y4z9.c",
  "north" : DIR+"/rooms/x1y5z9.c",
  "south" : DIR+"/rooms/x1y3z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
