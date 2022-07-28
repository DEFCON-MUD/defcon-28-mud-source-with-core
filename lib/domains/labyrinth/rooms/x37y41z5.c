inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 41, 5 }));
  set_short( "Corridor - x37y41z5" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y42z5.c",
  "south" : DIR+"/rooms/x37y40z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
