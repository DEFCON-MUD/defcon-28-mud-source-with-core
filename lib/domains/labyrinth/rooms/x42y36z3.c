inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 36, 3 }));
  set_short( "Hallway - x42y36z3" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y36z3.c",
  "east" : DIR+"/rooms/x43y36z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
