inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 4 }));
  set_short( "Corridor - x17y38z4" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y38z4.c",
  "south" : DIR+"/rooms/x17y37z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
