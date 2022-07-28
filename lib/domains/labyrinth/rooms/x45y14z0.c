inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 0 }));
  set_short( "Hallway - x45y14z0" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y14z0.c",
  "south" : DIR+"/rooms/x45y13z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
