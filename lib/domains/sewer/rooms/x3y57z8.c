inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 57, 8 }));
  set_short( "Corridor - x3y57z8" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y58z8.c",
  "south" : DIR+"/rooms/x3y56z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
