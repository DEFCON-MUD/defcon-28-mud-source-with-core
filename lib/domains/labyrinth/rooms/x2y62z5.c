inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 5 }));
  set_short( "Corridor - x2y62z5" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z5.c",
  "east" : DIR+"/rooms/x3y62z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
