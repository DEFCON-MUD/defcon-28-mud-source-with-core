inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 4, 4 }));
  set_short( "Passage - x24y4z4" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y4z4.c",
  "east" : DIR+"/rooms/x25y4z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
