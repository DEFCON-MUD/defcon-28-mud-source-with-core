inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 26, 0 }));
  set_short( "Passage - x11y26z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y26z0.c",
  "south" : DIR+"/rooms/x11y25z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
