inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 18, 1 }));
  set_short( "Corridor - x32y18z1" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y18z1.c",
  "east" : DIR+"/rooms/x33y18z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
