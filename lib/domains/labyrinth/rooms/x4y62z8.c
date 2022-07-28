inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 62, 8 }));
  set_short( "Hallway - x4y62z8" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y62z8.c",
  "east" : DIR+"/rooms/x5y62z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
