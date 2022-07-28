inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 6 }));
  set_short( "Passage - x1y5z6" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z6.c",
  "south" : DIR+"/rooms/x1y4z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
