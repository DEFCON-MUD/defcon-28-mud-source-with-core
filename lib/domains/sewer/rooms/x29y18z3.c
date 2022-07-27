inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 3 }));
  set_short( "Passage - x29y18z3" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y18z3.c",
  "south" : DIR+"/rooms/x29y17z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
