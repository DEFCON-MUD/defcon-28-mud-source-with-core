inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 6 }));
  set_short( "Corridor - x41y44z6" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y44z6.c",
  "south" : DIR+"/rooms/x41y43z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
