inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 3 }));
  set_short( "Passage - x11y4z3" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y5z3.c",
  "south" : DIR+"/rooms/x11y3z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
