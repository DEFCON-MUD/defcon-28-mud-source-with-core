inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 41, 5 }));
  set_short( "Hallway - x35y41z5" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y42z5.c",
  "south" : DIR+"/rooms/x35y40z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
