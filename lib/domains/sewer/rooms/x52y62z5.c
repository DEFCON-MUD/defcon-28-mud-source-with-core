inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 62, 5 }));
  set_short( "Corridor - x52y62z5" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y62z5.c",
  "east" : DIR+"/rooms/x53y62z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
