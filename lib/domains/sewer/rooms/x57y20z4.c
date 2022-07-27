inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 4 }));
  set_short( "Hallway - x57y20z4" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y20z4.c",
  "south" : DIR+"/rooms/x57y19z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
