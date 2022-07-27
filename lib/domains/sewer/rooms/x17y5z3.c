inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 5, 3 }));
  set_short( "Passage - x17y5z3" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y6z3.c",
  "south" : DIR+"/rooms/x17y4z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
