inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 44, 1 }));
  set_short( "Hallway - x38y44z1" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y44z1.c",
  "east" : DIR+"/rooms/x39y44z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
