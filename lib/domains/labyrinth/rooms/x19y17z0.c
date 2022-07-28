inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 17, 0 }));
  set_short( "Hallway - x19y17z0" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y18z0.c",
  "south" : DIR+"/rooms/x19y16z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
