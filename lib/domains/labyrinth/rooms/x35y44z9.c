inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 9 }));
  set_short( "Corridor - x35y44z9" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y44z9.c",
  "north" : DIR+"/rooms/x35y45z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
