inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 54, 6 }));
  set_short( "Corridor - x52y54z6" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y54z6.c",
  "east" : DIR+"/rooms/x53y54z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
