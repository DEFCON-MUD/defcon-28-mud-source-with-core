inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 33, 9 }));
  set_short( "Corridor - x13y33z9" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y34z9.c",
  "south" : DIR+"/rooms/x13y32z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
