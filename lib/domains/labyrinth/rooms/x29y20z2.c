inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 20, 2 }));
  set_short( "Passage - x29y20z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y21z2.c",
  "south" : DIR+"/rooms/x29y19z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
