inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 3 }));
  set_short( "Passage - x17y50z3" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y50z3.c",
  "south" : DIR+"/rooms/x17y49z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
