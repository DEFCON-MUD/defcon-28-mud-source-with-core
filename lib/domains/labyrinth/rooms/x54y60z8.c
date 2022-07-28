inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 60, 8 }));
  set_short( "Corridor - x54y60z8" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y60z8.c",
  "east" : DIR+"/rooms/x55y60z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
