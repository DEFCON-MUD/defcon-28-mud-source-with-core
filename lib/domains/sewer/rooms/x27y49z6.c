inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 49, 6 }));
  set_short( "Hallway - x27y49z6" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y50z6.c",
  "south" : DIR+"/rooms/x27y48z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
