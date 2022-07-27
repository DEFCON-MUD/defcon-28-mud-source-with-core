inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 58, 3 }));
  set_short( "Hallway - x45y58z3" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y58z3.c",
  "east" : DIR+"/rooms/x46y58z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
