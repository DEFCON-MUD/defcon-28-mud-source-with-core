inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 2 }));
  set_short( "Hallway - x49y18z2" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y18z2.c",
  "south" : DIR+"/rooms/x49y17z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
