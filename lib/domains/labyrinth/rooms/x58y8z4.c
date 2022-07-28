inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 8, 4 }));
  set_short( "Corridor - x58y8z4" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y8z4.c",
  "east" : DIR+"/rooms/x59y8z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
