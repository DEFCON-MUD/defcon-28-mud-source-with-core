inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 62, 7 }));
  set_short( "Passage - x42y62z7" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y62z7.c",
  "east" : DIR+"/rooms/x43y62z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
