inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 62, 6 }));
  set_short( "Passage - x40y62z6" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y62z6.c",
  "east" : DIR+"/rooms/x41y62z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
