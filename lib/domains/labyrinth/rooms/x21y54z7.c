inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 7 }));
  set_short( "Passage - x21y54z7" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y54z7.c",
  "north" : DIR+"/rooms/x21y55z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
