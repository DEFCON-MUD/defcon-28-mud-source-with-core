inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 15, 5 }));
  set_short( "Hallway - x29y15z5" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y16z5.c",
  "south" : DIR+"/rooms/x29y14z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
