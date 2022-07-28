inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 44, 1 }));
  set_short( "Corridor - x23y44z1" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y44z1.c",
  "east" : DIR+"/rooms/x24y44z1.c",
  "south" : DIR+"/rooms/x23y43z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
