inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 49, 1 }));
  set_short( "Corridor - x21y49z1" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y50z1.c",
  "south" : DIR+"/rooms/x21y48z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
