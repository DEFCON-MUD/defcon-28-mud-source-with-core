inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 47, 2 }));
  set_short( "Hallway - x23y47z2" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y48z2.c",
  "south" : DIR+"/rooms/x23y46z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
