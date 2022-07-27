inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 5 }));
  set_short( "Corridor - x33y58z5" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y58z5.c",
  "north" : DIR+"/rooms/x33y59z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
