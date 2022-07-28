inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 50, 2 }));
  set_short( "Corridor - x57y50z2" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y50z2.c",
  "north" : DIR+"/rooms/x57y51z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
