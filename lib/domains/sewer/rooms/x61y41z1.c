inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 41, 1 }));
  set_short( "Hallway - x61y41z1" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y42z1.c",
  "south" : DIR+"/rooms/x61y40z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
