inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 52, 5 }));
  set_short( "Hallway - x54y52z5" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y52z5.c",
  "east" : DIR+"/rooms/x55y52z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
