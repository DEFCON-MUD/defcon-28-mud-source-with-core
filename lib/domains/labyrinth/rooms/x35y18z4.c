inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 4 }));
  set_short( "Corridor - x35y18z4" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y19z4.c",
  "south" : DIR+"/rooms/x35y17z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
