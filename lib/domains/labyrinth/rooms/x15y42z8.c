inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 8 }));
  set_short( "Corridor - x15y42z8" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y42z8.c",
  "north" : DIR+"/rooms/x15y43z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
