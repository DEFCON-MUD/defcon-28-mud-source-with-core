inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 61, 9 }));
  set_short( "Corridor - x53y61z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y62z9.c",
  "south" : DIR+"/rooms/x53y60z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
