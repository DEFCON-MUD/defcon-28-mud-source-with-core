inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 0, 7 }));
  set_short( "Passage - x37y0z7" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y0z7.c",
  "east" : DIR+"/rooms/x38y0z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
