inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 40, 6 }));
  set_short( "Passage - x43y40z6" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y40z6.c",
  "north" : DIR+"/rooms/x43y41z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
