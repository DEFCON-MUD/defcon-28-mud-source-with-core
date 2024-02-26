inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 44, 3 }));
  set_short( "Hallway - x55y44z3" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y44z3.c",
  "east" : DIR+"/rooms/x56y44z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
