inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 26, 5 }));
  set_short( "Hallway - x30y26z5" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y26z5.c",
  "east" : DIR+"/rooms/x31y26z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
