inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 13, 9 }));
  set_short( "Passage - x5y13z9" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y14z9.c",
  "south" : DIR+"/rooms/x5y12z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
