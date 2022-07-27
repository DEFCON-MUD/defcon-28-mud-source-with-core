inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 9, 3 }));
  set_short( "Passage - x29y9z3" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y10z3.c",
  "south" : DIR+"/rooms/x29y8z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
