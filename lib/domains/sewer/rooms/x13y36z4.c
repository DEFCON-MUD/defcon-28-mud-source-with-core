inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 36, 4 }));
  set_short( "Hallway - x13y36z4" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y36z4.c",
  "south" : DIR+"/rooms/x13y35z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
