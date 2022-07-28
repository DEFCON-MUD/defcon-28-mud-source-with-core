inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 2 }));
  set_short( "Hallway - x17y28z2" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y28z2.c",
  "south" : DIR+"/rooms/x17y27z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
