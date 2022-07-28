inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 51, 7 }));
  set_short( "Passage - x17y51z7" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y52z7.c",
  "south" : DIR+"/rooms/x17y50z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
