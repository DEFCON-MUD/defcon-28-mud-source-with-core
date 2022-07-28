inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 17, 1 }));
  set_short( "Corridor - x35y17z1" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y18z1.c",
  "south" : DIR+"/rooms/x35y16z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
