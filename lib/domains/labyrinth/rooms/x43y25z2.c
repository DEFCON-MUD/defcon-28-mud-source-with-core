inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 25, 2 }));
  set_short( "Passage - x43y25z2" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y26z2.c",
  "south" : DIR+"/rooms/x43y24z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
