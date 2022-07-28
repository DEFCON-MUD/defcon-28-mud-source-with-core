inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 46, 6 }));
  set_short( "Hallway - x59y46z6" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y46z6.c",
  "south" : DIR+"/rooms/x59y45z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
