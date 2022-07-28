inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 12, 4 }));
  set_short( "Corridor - x5y12z4" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y12z4.c",
  "east" : DIR+"/rooms/x6y12z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
