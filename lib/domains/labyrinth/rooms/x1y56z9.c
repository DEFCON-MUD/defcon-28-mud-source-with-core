inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 9 }));
  set_short( "Hallway - x1y56z9" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y57z9.c",
  "south" : DIR+"/rooms/x1y55z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
