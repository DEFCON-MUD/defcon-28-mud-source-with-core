inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 37, 4 }));
  set_short( "Hallway - x59y37z4" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y38z4.c",
  "south" : DIR+"/rooms/x59y36z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
