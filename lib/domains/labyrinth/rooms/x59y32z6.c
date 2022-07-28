inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 32, 6 }));
  set_short( "Hallway - x59y32z6" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y32z6.c",
  "east" : DIR+"/rooms/x60y32z6.c",
  "north" : DIR+"/rooms/x59y33z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
