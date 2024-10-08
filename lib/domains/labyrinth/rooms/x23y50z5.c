inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 50, 5 }));
  set_short( "Corridor - x23y50z5" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y51z5.c",
  "south" : DIR+"/rooms/x23y49z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
