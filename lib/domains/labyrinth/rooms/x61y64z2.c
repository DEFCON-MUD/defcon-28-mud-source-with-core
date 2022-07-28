inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 64, 2 }));
  set_short( "Hallway - x61y64z2" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y64z2.c",
  "east" : DIR+"/rooms/x62y64z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
