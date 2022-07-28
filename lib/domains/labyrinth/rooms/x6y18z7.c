inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 18, 7 }));
  set_short( "Passage - x6y18z7" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y18z7.c",
  "east" : DIR+"/rooms/x7y18z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
