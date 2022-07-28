inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 49, 0 }));
  set_short( "Corridor - x23y49z0" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y50z0.c",
  "south" : DIR+"/rooms/x23y48z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
