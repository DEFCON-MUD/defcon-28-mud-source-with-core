inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 36, 2 }));
  set_short( "Corridor - x55y36z2" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y36z2.c",
  "north" : DIR+"/rooms/x55y37z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
