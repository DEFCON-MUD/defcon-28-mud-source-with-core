inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 4 }));
  set_short( "Passage - x45y16z4" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y16z4.c",
  "south" : DIR+"/rooms/x45y15z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
