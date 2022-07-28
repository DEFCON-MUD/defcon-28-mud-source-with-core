inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 16, 6 }));
  set_short( "Hallway - x38y16z6" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y16z6.c",
  "east" : DIR+"/rooms/x39y16z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
