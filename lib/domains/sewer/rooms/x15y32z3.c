inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 32, 3 }));
  set_short( "Passage - x15y32z3" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y33z3.c",
  "south" : DIR+"/rooms/x15y31z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
