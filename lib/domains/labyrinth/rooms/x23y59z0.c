inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 59, 0 }));
  set_short( "Corridor - x23y59z0" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y60z0.c",
  "south" : DIR+"/rooms/x23y58z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
