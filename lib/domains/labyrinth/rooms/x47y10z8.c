inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 10, 8 }));
  set_short( "Hallway - x47y10z8" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y11z8.c",
  "south" : DIR+"/rooms/x47y9z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
