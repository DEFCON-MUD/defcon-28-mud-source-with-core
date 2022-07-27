inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 55, 2 }));
  set_short( "Hallway - x27y55z2" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y56z2.c",
  "south" : DIR+"/rooms/x27y54z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
