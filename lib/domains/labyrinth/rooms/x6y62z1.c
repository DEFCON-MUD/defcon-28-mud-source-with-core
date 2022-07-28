inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 62, 1 }));
  set_short( "Corridor - x6y62z1" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y62z1.c",
  "east" : DIR+"/rooms/x7y62z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
