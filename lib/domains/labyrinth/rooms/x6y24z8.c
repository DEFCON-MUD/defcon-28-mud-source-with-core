inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 24, 8 }));
  set_short( "Passage - x6y24z8" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y24z8.c",
  "east" : DIR+"/rooms/x7y24z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
