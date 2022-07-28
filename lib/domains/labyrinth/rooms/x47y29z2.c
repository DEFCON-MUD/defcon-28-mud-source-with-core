inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 29, 2 }));
  set_short( "Hallway - x47y29z2" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y30z2.c",
  "south" : DIR+"/rooms/x47y28z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
