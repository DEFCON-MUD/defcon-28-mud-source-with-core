inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 5 }));
  set_short( "Passage - x1y0z5" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
