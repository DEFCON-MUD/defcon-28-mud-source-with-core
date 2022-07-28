inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 36, 7 }));
  set_short( "Passage - x15y36z7" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y36z7.c",
  "east" : DIR+"/rooms/x16y36z7.c",
  "north" : DIR+"/rooms/x15y37z7.c",
  "south" : DIR+"/rooms/x15y35z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
