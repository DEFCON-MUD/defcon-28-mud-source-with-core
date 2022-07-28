inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 38, 8 }));
  set_short( "Corridor - x36y38z8" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y38z8.c",
  "east" : DIR+"/rooms/x37y38z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
