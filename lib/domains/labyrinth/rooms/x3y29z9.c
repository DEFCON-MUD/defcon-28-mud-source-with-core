inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 29, 9 }));
  set_short( "Hallway - x3y29z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y30z9.c",
  "south" : DIR+"/rooms/x3y28z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
