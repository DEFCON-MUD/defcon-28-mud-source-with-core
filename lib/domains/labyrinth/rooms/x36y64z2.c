inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 64, 2 }));
  set_short( "Passage - x36y64z2" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y64z2.c",
  "east" : DIR+"/rooms/x37y64z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
