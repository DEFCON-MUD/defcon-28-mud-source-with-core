inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 34, 1 }));
  set_short( "Hallway - x57y34z1" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y34z1.c",
  "north" : DIR+"/rooms/x57y35z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
