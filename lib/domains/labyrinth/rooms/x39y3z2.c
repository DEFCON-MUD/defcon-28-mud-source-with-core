inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 3, 2 }));
  set_short( "Hallway - x39y3z2" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y4z2.c",
  "south" : DIR+"/rooms/x39y2z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
