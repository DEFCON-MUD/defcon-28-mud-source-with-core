inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 23, 5 }));
  set_short( "Passage - x17y23z5" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y24z5.c",
  "south" : DIR+"/rooms/x17y22z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
