inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 6 }));
  set_short( "Corridor - x37y20z6" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y20z6.c",
  "south" : DIR+"/rooms/x37y19z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
