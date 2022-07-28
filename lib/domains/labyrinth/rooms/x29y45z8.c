inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 45, 8 }));
  set_short( "Corridor - x29y45z8" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y46z8.c",
  "south" : DIR+"/rooms/x29y44z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
