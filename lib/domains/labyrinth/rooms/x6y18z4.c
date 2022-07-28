inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 18, 4 }));
  set_short( "Passage - x6y18z4" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y18z4.c",
  "east" : DIR+"/rooms/x7y18z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
