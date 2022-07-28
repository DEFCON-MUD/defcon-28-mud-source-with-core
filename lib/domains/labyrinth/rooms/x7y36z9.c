inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 9 }));
  set_short( "Hallway - x7y36z9" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y36z9.c",
  "south" : DIR+"/rooms/x7y35z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
