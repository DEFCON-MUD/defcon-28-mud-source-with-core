inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 52, 8 }));
  set_short( "Corridor - x58y52z8" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y52z8.c",
  "east" : DIR+"/rooms/x59y52z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
