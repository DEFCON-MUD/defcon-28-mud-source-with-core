inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 8, 5 }));
  set_short( "Hallway - x32y8z5" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y8z5.c",
  "east" : DIR+"/rooms/x33y8z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
