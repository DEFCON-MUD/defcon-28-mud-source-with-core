inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 20, 5 }));
  set_short( "Hallway - x38y20z5" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y20z5.c",
  "east" : DIR+"/rooms/x39y20z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
