inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 45, 2 }));
  set_short( "Hallway - x41y45z2" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y46z2.c",
  "south" : DIR+"/rooms/x41y44z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
