inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 60, 8 }));
  set_short( "Corridor - x36y60z8" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y60z8.c",
  "east" : DIR+"/rooms/x37y60z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
