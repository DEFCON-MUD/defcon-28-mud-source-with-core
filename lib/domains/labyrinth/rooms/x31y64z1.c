inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 64, 1 }));
  set_short( "Hallway - x31y64z1" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y64z1.c",
  "east" : DIR+"/rooms/x32y64z1.c",
  "south" : DIR+"/rooms/x31y63z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
