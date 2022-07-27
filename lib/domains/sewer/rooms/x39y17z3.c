inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 17, 3 }));
  set_short( "Passage - x39y17z3" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y18z3.c",
  "south" : DIR+"/rooms/x39y16z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
