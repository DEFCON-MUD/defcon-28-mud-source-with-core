inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 4 }));
  set_short( "Corridor - x23y60z4" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y61z4.c",
  "south" : DIR+"/rooms/x23y59z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
