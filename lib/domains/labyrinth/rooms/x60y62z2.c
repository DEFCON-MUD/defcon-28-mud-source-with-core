inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 2 }));
  set_short( "Hallway - x60y62z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z2.c",
  "east" : DIR+"/rooms/x61y62z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
