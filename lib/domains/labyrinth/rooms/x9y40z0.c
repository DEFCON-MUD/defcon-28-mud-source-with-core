inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 0 }));
  set_short( "Passage - x9y40z0" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y40z0.c",
  "north" : DIR+"/rooms/x9y41z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
