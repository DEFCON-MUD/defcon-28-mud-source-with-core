inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 58, 1 }));
  set_short( "Corridor - x15y58z1" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y58z1.c",
  "north" : DIR+"/rooms/x15y59z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
