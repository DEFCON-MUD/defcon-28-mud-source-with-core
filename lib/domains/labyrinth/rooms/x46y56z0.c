inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 56, 0 }));
  set_short( "Corridor - x46y56z0" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y56z0.c",
  "east" : DIR+"/rooms/x47y56z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
