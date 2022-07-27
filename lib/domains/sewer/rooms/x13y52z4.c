inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 4 }));
  set_short( "Corridor - x13y52z4" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y52z4.c",
  "north" : DIR+"/rooms/x13y53z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
