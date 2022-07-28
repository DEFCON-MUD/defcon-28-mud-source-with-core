inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 53, 2 }));
  set_short( "Hallway - x17y53z2" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y54z2.c",
  "south" : DIR+"/rooms/x17y52z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
