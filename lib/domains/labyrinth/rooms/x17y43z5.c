inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 43, 5 }));
  set_short( "Hallway - x17y43z5" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y44z5.c",
  "south" : DIR+"/rooms/x17y42z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
