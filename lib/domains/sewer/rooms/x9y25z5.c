inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 25, 5 }));
  set_short( "Hallway - x9y25z5" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y26z5.c",
  "south" : DIR+"/rooms/x9y24z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
