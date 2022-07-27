inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 42, 9 }));
  set_short( "Hallway - x13y42z9" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y42z9.c",
  "north" : DIR+"/rooms/x13y43z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
