inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 50, 4 }));
  set_short( "Hallway - x24y50z4" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y50z4.c",
  "east" : DIR+"/rooms/x25y50z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
