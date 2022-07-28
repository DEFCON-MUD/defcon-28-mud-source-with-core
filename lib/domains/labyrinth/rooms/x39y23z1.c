inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 23, 1 }));
  set_short( "Passage - x39y23z1" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y24z1.c",
  "south" : DIR+"/rooms/x39y22z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
