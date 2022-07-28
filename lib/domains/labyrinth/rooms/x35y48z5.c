inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 48, 5 }));
  set_short( "Passage - x35y48z5" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y48z5.c",
  "south" : DIR+"/rooms/x35y47z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
