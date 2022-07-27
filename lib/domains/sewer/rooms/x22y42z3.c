inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 42, 3 }));
  set_short( "Passage - x22y42z3" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y42z3.c",
  "east" : DIR+"/rooms/x23y42z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
