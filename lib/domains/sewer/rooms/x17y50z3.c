inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 50, 3 }));
  set_short( "Hallway - x17y50z3" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y50z3.c",
  "south" : DIR+"/rooms/x17y49z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
