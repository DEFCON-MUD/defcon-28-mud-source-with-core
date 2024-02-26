inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 44, 0 }));
  set_short( "Hallway - x59y44z0" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y44z0.c",
  "east" : DIR+"/rooms/x60y44z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
