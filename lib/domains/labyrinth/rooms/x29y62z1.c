inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 62, 1 }));
  set_short( "Hallway - x29y62z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y62z1.c",
  "south" : DIR+"/rooms/x29y61z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
