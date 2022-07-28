inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 5 }));
  set_short( "Hallway - x39y16z5" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y16z5.c",
  "north" : DIR+"/rooms/x39y17z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
