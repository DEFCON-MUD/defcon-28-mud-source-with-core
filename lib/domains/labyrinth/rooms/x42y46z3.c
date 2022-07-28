inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 46, 3 }));
  set_short( "Hallway - x42y46z3" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y46z3.c",
  "east" : DIR+"/rooms/x43y46z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
