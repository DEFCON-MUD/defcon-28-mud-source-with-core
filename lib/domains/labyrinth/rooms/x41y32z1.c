inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 32, 1 }));
  set_short( "Hallway - x41y32z1" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y32z1.c",
  "south" : DIR+"/rooms/x41y31z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
