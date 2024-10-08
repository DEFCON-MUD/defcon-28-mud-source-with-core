inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 37, 5 }));
  set_short( "Corridor - x39y37z5" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y38z5.c",
  "south" : DIR+"/rooms/x39y36z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
