inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 8, 2 }));
  set_short( "Passage - x13y8z2" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y8z2.c",
  "south" : DIR+"/rooms/x13y7z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
