inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 8 }));
  set_short( "Corridor - x31y14z8" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y14z8.c",
  "south" : DIR+"/rooms/x31y13z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
