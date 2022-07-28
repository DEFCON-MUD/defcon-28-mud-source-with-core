inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 44, 5 }));
  set_short( "Hallway - x51y44z5" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y45z5.c",
  "south" : DIR+"/rooms/x51y43z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
