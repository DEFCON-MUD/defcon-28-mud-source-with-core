inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 40, 5 }));
  set_short( "Hallway - x39y40z5" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y40z5.c",
  "east" : DIR+"/rooms/x40y40z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
