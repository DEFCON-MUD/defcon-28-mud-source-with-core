inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 25, 3 }));
  set_short( "Hallway - x47y25z3" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y26z3.c",
  "south" : DIR+"/rooms/x47y24z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
