inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 51, 6 }));
  set_short( "Hallway - x11y51z6" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y52z6.c",
  "south" : DIR+"/rooms/x11y50z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
