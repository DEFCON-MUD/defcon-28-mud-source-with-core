inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 2 }));
  set_short( "Corridor - x55y2z2" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y2z2.c",
  "east" : DIR+"/rooms/x56y2z2.c",
  "north" : DIR+"/rooms/x55y3z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
