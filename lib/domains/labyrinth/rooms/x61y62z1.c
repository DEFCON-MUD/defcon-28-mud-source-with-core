inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 62, 1 }));
  set_short( "Hallway - x61y62z1" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y62z1.c",
  "south" : DIR+"/rooms/x61y61z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
