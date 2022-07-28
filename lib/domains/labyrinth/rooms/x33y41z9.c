inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 41, 9 }));
  set_short( "Passage - x33y41z9" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y42z9.c",
  "south" : DIR+"/rooms/x33y40z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
