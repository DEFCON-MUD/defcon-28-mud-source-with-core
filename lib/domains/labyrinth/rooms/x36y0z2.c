inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 0, 2 }));
  set_short( "Passage - x36y0z2" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y0z2.c",
  "east" : DIR+"/rooms/x37y0z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
