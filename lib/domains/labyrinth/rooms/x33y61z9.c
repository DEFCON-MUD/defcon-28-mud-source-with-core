inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 61, 9 }));
  set_short( "Hallway - x33y61z9" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y62z9.c",
  "south" : DIR+"/rooms/x33y60z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
