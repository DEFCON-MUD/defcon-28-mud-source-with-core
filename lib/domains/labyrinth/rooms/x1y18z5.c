inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 5 }));
  set_short( "Corridor - x1y18z5" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y19z5.c",
  "south" : DIR+"/rooms/x1y17z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
