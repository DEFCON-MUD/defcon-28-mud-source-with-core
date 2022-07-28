inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 0, 8 }));
  set_short( "Passage - x40y0z8" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y0z8.c",
  "east" : DIR+"/rooms/x41y0z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
