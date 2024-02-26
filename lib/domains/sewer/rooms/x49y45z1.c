inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 45, 1 }));
  set_short( "Corridor - x49y45z1" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y46z1.c",
  "south" : DIR+"/rooms/x49y44z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
