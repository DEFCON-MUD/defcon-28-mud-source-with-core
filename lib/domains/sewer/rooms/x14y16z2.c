inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 16, 2 }));
  set_short( "Passage - x14y16z2" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y16z2.c",
  "east" : DIR+"/rooms/x15y16z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
