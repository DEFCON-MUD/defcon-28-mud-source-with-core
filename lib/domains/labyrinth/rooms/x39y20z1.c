inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 1 }));
  set_short( "Hallway - x39y20z1" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y20z1.c",
  "south" : DIR+"/rooms/x39y19z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
