inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 31, 1 }));
  set_short( "Hallway - x37y31z1" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y32z1.c",
  "south" : DIR+"/rooms/x37y30z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
