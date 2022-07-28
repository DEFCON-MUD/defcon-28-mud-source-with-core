inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 51, 3 }));
  set_short( "Hallway - x47y51z3" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y52z3.c",
  "south" : DIR+"/rooms/x47y50z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
