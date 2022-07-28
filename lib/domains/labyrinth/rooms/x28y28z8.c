inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 28, 8 }));
  set_short( "Hallway - x28y28z8" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y28z8.c",
  "east" : DIR+"/rooms/x29y28z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
