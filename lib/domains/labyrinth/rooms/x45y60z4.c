inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 60, 4 }));
  set_short( "Corridor - x45y60z4" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y60z4.c",
  "east" : DIR+"/rooms/x46y60z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
