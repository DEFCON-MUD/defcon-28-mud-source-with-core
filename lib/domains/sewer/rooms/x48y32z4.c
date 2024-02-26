inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 32, 4 }));
  set_short( "Corridor - x48y32z4" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y32z4.c",
  "east" : DIR+"/rooms/x49y32z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
