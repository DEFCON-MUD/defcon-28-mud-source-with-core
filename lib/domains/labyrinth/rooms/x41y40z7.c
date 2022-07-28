inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 7 }));
  set_short( "Hallway - x41y40z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y40z7.c",
  "north" : DIR+"/rooms/x41y41z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
