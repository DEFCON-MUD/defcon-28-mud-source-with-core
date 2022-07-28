inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 7 }));
  set_short( "Corridor - x39y50z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y50z7.c",
  "north" : DIR+"/rooms/x39y51z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
