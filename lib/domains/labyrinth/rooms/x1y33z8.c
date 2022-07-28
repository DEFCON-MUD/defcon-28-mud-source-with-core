inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 33, 8 }));
  set_short( "Passage - x1y33z8" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y34z8.c",
  "south" : DIR+"/rooms/x1y32z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
