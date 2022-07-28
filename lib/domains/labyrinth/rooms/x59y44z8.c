inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 44, 8 }));
  set_short( "Corridor - x59y44z8" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y44z8.c",
  "north" : DIR+"/rooms/x59y45z8.c",
  "south" : DIR+"/rooms/x59y43z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
