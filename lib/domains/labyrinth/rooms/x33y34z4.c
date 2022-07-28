inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 4 }));
  set_short( "Passage - x33y34z4" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y35z4.c",
  "south" : DIR+"/rooms/x33y33z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
