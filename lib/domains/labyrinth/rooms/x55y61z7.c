inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 61, 7 }));
  set_short( "Hallway - x55y61z7" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y62z7.c",
  "south" : DIR+"/rooms/x55y60z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
