inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 36, 9 }));
  set_short( "Corridor - x4y36z9" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y36z9.c",
  "east" : DIR+"/rooms/x5y36z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
