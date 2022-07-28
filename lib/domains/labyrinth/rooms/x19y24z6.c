inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 24, 6 }));
  set_short( "Corridor - x19y24z6" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y25z6.c",
  "south" : DIR+"/rooms/x19y23z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
