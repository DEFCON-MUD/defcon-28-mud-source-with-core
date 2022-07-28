inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 0 }));
  set_short( "Corridor - x35y44z0" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y45z0.c",
  "south" : DIR+"/rooms/x35y43z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
