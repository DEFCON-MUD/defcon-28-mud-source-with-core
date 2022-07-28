inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 30, 2 }));
  set_short( "Corridor - x36y30z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y30z2.c",
  "east" : DIR+"/rooms/x37y30z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
