inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 33, 6 }));
  set_short( "Hallway - x13y33z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y34z6.c",
  "south" : DIR+"/rooms/x13y32z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
