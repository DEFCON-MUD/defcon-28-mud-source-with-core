inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 48, 6 }));
  set_short( "Corridor - x31y48z6" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y48z6.c",
  "north" : DIR+"/rooms/x31y49z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
