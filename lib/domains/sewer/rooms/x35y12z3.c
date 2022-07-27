inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 3 }));
  set_short( "Passage - x35y12z3" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y13z3.c",
  "south" : DIR+"/rooms/x35y11z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
