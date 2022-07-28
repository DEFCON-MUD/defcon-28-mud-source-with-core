inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 6 }));
  set_short( "Passage - x21y8z6" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y8z6.c",
  "south" : DIR+"/rooms/x21y7z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
