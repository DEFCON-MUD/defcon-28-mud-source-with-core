inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 49, 2 }));
  set_short( "Passage - x61y49z2" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y50z2.c",
  "south" : DIR+"/rooms/x61y48z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
