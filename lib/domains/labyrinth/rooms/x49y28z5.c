inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 5 }));
  set_short( "Hallway - x49y28z5" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y29z5.c",
  "south" : DIR+"/rooms/x49y27z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
