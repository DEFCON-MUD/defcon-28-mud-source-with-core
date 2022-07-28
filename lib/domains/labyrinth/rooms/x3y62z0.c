inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 62, 0 }));
  set_short( "Corridor - x3y62z0" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y62z0.c",
  "east" : DIR+"/rooms/x4y62z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
