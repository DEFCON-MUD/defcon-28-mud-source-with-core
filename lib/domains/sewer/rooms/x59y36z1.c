inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 36, 1 }));
  set_short( "Corridor - x59y36z1" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y36z1.c",
  "east" : DIR+"/rooms/x60y36z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
