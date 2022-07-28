inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 36, 7 }));
  set_short( "Passage - x5y36z7" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y36z7.c",
  "south" : DIR+"/rooms/x5y35z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
