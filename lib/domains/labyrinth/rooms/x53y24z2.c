inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 2 }));
  set_short( "Hallway - x53y24z2" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y24z2.c",
  "north" : DIR+"/rooms/x53y25z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
