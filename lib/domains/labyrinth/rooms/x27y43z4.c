inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 43, 4 }));
  set_short( "Passage - x27y43z4" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y44z4.c",
  "south" : DIR+"/rooms/x27y42z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
