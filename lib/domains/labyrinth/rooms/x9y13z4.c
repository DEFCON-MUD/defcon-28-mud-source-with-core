inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 13, 4 }));
  set_short( "Passage - x9y13z4" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y14z4.c",
  "south" : DIR+"/rooms/x9y12z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
