inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 36, 3 }));
  set_short( "Corridor - x50y36z3" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y36z3.c",
  "east" : DIR+"/rooms/x51y36z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
