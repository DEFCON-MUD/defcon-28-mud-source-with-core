inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 3 }));
  set_short( "Passage - x49y8z3" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y9z3.c",
  "south" : DIR+"/rooms/x49y7z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
