inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 54, 3 }));
  set_short( "Passage - x43y54z3" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y55z3.c",
  "south" : DIR+"/rooms/x43y53z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
