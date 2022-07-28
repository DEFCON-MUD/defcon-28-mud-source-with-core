inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 5 }));
  set_short( "Corridor - x45y16z5" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y16z5.c",
  "north" : DIR+"/rooms/x45y17z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
