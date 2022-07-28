inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 11, 2 }));
  set_short( "Hallway - x13y11z2" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y12z2.c",
  "south" : DIR+"/rooms/x13y10z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
