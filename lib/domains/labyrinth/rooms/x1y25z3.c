inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 25, 3 }));
  set_short( "Hallway - x1y25z3" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y26z3.c",
  "south" : DIR+"/rooms/x1y24z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
