inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 39, 7 }));
  set_short( "Passage - x35y39z7" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y40z7.c",
  "south" : DIR+"/rooms/x35y38z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
