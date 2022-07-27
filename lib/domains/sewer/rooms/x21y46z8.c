inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 8 }));
  set_short( "Corridor - x21y46z8" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y46z8.c",
  "south" : DIR+"/rooms/x21y45z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
