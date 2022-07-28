inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 62, 1 }));
  set_short( "Passage - x40y62z1" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y62z1.c",
  "east" : DIR+"/rooms/x41y62z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
