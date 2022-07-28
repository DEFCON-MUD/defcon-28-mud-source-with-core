inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 36, 1 }));
  set_short( "Hallway - x44y36z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y36z1.c",
  "east" : DIR+"/rooms/x45y36z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
