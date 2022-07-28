inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 0 }));
  set_short( "Passage - x35y18z0" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y19z0.c",
  "south" : DIR+"/rooms/x35y17z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
