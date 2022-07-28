inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 51, 9 }));
  set_short( "Corridor - x27y51z9" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y52z9.c",
  "south" : DIR+"/rooms/x27y50z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
