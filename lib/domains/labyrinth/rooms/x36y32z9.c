inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 32, 9 }));
  set_short( "Passage - x36y32z9" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y32z9.c",
  "east" : DIR+"/rooms/x37y32z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
