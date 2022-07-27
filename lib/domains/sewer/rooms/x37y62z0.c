inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 62, 0 }));
  set_short( "Hallway - x37y62z0" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y62z0.c",
  "south" : DIR+"/rooms/x37y61z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
