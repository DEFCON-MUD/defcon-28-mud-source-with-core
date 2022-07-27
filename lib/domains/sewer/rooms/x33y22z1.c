inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 22, 1 }));
  set_short( "Corridor - x33y22z1" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y23z1.c",
  "south" : DIR+"/rooms/x33y21z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
