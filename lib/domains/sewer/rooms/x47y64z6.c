inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 64, 6 }));
  set_short( "Hallway - x47y64z6" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y64z6.c",
  "east" : DIR+"/rooms/x48y64z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
