inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 5 }));
  set_short( "Hallway - x57y30z5" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y30z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
