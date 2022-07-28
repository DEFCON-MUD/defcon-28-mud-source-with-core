inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 18, 3 }));
  set_short( "Hallway - x45y18z3" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y18z3.c",
  "north" : DIR+"/rooms/x45y19z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
