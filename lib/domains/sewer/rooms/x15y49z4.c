inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 49, 4 }));
  set_short( "Passage - x15y49z4" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y50z4.c",
  "south" : DIR+"/rooms/x15y48z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
