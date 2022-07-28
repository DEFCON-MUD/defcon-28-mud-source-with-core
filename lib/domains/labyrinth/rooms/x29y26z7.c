inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 26, 7 }));
  set_short( "Corridor - x29y26z7" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y26z7.c",
  "north" : DIR+"/rooms/x29y27z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
