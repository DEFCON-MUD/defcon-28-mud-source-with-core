inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 22, 3 }));
  set_short( "Hallway - x47y22z3" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y22z3.c",
  "east" : DIR+"/rooms/x48y22z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
