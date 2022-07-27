inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 20, 3 }));
  set_short( "Passage - x29y20z3" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y20z3.c",
  "north" : DIR+"/rooms/x29y21z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
