inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 45, 5 }));
  set_short( "Hallway - x37y45z5" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y46z5.c",
  "south" : DIR+"/rooms/x37y44z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
