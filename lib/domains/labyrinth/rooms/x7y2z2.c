inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 2, 2 }));
  set_short( "Passage - x7y2z2" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y2z2.c",
  "north" : DIR+"/rooms/x7y3z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
