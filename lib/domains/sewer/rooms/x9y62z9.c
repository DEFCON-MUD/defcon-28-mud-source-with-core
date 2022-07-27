inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 62, 9 }));
  set_short( "Corridor - x9y62z9" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y62z9.c",
  "south" : DIR+"/rooms/x9y61z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
