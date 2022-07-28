inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 62, 1 }));
  set_short( "Corridor - x7y62z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y62z1.c",
  "south" : DIR+"/rooms/x7y61z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
