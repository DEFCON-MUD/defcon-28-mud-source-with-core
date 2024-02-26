inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 8 }));
  set_short( "Corridor - x59y24z8" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y24z8.c",
  "east" : DIR+"/rooms/x60y24z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
