inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 9, 3 }));
  set_short( "Passage - x41y9z3" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y10z3.c",
  "south" : DIR+"/rooms/x41y8z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
