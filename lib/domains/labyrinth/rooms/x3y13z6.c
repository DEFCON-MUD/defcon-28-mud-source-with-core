inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 13, 6 }));
  set_short( "Corridor - x3y13z6" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y14z6.c",
  "south" : DIR+"/rooms/x3y12z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
