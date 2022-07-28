inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 11, 8 }));
  set_short( "Corridor - x61y11z8" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y12z8.c",
  "south" : DIR+"/rooms/x61y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
