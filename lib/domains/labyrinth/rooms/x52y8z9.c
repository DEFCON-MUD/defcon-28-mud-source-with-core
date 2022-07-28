inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 8, 9 }));
  set_short( "Corridor - x52y8z9" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y8z9.c",
  "east" : DIR+"/rooms/x53y8z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
