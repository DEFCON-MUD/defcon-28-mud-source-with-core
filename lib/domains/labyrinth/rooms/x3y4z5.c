inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 4, 5 }));
  set_short( "Passage - x3y4z5" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "south" : DIR+"/rooms/x3y3z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
