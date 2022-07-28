inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 9 }));
  set_short( "Passage - x25y58z9" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y58z9.c",
  "east" : DIR+"/rooms/x26y58z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
