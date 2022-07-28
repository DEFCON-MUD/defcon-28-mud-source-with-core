inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 44, 0 }));
  set_short( "Passage - x18y44z0" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y44z0.c",
  "east" : DIR+"/rooms/x19y44z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
