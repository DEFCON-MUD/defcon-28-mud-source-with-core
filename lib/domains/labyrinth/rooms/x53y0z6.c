inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 0, 6 }));
  set_short( "Hallway - x53y0z6" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y0z6.c",
  "east" : DIR+"/rooms/x54y0z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
