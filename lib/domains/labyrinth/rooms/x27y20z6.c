inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 20, 6 }));
  set_short( "Hallway - x27y20z6" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y20z6.c",
  "south" : DIR+"/rooms/x27y19z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
