inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 50, 5 }));
  set_short( "Hallway - x41y50z5" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y50z5.c",
  "north" : DIR+"/rooms/x41y51z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
