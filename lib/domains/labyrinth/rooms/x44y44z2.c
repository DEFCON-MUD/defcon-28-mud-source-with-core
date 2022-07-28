inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 44, 2 }));
  set_short( "Hallway - x44y44z2" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y44z2.c",
  "east" : DIR+"/rooms/x45y44z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
