inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 60, 4 }));
  set_short( "Hallway - x35y60z4" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y60z4.c",
  "north" : DIR+"/rooms/x35y61z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
