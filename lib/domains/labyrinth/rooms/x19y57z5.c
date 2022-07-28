inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 57, 5 }));
  set_short( "Corridor - x19y57z5" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y58z5.c",
  "south" : DIR+"/rooms/x19y56z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
