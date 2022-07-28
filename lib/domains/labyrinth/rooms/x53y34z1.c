inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 1 }));
  set_short( "Passage - x53y34z1" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y34z1.c",
  "north" : DIR+"/rooms/x53y35z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
