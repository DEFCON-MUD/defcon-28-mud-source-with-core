inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 46, 1 }));
  set_short( "Hallway - x58y46z1" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y46z1.c",
  "east" : DIR+"/rooms/x59y46z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
