inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 43, 2 }));
  set_short( "Hallway - x33y43z2" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y44z2.c",
  "south" : DIR+"/rooms/x33y42z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
