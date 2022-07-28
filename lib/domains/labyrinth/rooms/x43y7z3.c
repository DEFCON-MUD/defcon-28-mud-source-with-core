inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 7, 3 }));
  set_short( "Hallway - x43y7z3" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y8z3.c",
  "south" : DIR+"/rooms/x43y6z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
