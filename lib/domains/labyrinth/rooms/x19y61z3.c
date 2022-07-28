inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 61, 3 }));
  set_short( "Passage - x19y61z3" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y62z3.c",
  "south" : DIR+"/rooms/x19y60z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
