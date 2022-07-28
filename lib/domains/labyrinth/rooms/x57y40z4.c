inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 4 }));
  set_short( "Corridor - x57y40z4" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y40z4.c",
  "east" : DIR+"/rooms/x58y40z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
