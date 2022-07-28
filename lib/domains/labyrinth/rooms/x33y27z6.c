inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 27, 6 }));
  set_short( "Hallway - x33y27z6" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y28z6.c",
  "south" : DIR+"/rooms/x33y26z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
