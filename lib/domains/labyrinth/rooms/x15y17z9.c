inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 17, 9 }));
  set_short( "Passage - x15y17z9" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y18z9.c",
  "south" : DIR+"/rooms/x15y16z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
