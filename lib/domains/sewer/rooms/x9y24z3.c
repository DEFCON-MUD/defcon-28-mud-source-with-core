inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 3 }));
  set_short( "Passage - x9y24z3" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y25z3.c",
  "south" : DIR+"/rooms/x9y23z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
