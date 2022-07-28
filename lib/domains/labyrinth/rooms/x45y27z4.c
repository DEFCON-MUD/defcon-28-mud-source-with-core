inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 27, 4 }));
  set_short( "Hallway - x45y27z4" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y28z4.c",
  "south" : DIR+"/rooms/x45y26z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
