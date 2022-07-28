inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 47, 5 }));
  set_short( "Passage - x9y47z5" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y48z5.c",
  "south" : DIR+"/rooms/x9y46z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
