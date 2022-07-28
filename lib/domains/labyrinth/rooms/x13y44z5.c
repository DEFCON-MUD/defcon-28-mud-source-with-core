inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 44, 5 }));
  set_short( "Passage - x13y44z5" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y44z5.c",
  "north" : DIR+"/rooms/x13y45z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
