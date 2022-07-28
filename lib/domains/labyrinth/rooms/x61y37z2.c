inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 37, 2 }));
  set_short( "Hallway - x61y37z2" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y38z2.c",
  "south" : DIR+"/rooms/x61y36z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
