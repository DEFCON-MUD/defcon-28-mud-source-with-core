inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 26, 4 }));
  set_short( "Corridor - x44y26z4" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y26z4.c",
  "east" : DIR+"/rooms/x45y26z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
