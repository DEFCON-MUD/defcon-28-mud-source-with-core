inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 9 }));
  set_short( "Passage - x53y17z9" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z9.c",
  "south" : DIR+"/rooms/x53y16z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
