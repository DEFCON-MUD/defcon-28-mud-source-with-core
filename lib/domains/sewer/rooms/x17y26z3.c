inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 26, 3 }));
  set_short( "Passage - x17y26z3" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y26z3.c",
  "south" : DIR+"/rooms/x17y25z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
