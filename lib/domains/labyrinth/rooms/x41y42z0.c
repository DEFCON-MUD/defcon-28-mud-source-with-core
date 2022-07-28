inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 42, 0 }));
  set_short( "Hallway - x41y42z0" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y42z0.c",
  "east" : DIR+"/rooms/x42y42z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
