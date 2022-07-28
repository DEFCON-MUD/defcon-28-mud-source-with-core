inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 1 }));
  set_short( "Corridor - x3y34z1" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y34z1.c",
  "north" : DIR+"/rooms/x3y35z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
