inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 7, 6 }));
  set_short( "Passage - x41y7z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y8z6.c",
  "south" : DIR+"/rooms/x41y6z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
