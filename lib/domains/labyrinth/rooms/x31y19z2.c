inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 19, 2 }));
  set_short( "Hallway - x31y19z2" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y20z2.c",
  "south" : DIR+"/rooms/x31y18z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
