inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 33, 9 }));
  set_short( "Hallway - x1y33z9" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y34z9.c",
  "south" : DIR+"/rooms/x1y32z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
