inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 53, 4 }));
  set_short( "Hallway - x9y53z4" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y54z4.c",
  "south" : DIR+"/rooms/x9y52z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
