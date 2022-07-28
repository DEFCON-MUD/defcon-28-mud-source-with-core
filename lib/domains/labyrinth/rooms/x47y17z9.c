inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 17, 9 }));
  set_short( "Passage - x47y17z9" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y18z9.c",
  "south" : DIR+"/rooms/x47y16z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
