inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 57, 5 }));
  set_short( "Hallway - x55y57z5" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y58z5.c",
  "south" : DIR+"/rooms/x55y56z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
