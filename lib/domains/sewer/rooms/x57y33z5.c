inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 33, 5 }));
  set_short( "Hallway - x57y33z5" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y34z5.c",
  "south" : DIR+"/rooms/x57y32z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
