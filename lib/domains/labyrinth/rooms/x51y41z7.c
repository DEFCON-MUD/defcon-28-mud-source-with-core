inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 41, 7 }));
  set_short( "Passage - x51y41z7" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y42z7.c",
  "south" : DIR+"/rooms/x51y40z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
