inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 34, 5 }));
  set_short( "Corridor - x42y34z5" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y34z5.c",
  "east" : DIR+"/rooms/x43y34z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
