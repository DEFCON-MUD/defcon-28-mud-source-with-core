inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 23, 1 }));
  set_short( "Hallway - x53y23z1" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y24z1.c",
  "south" : DIR+"/rooms/x53y22z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
