inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 48, 1 }));
  set_short( "Hallway - x48y48z1" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y48z1.c",
  "east" : DIR+"/rooms/x49y48z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
