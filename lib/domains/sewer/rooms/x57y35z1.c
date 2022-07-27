inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 35, 1 }));
  set_short( "Passage - x57y35z1" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y36z1.c",
  "south" : DIR+"/rooms/x57y34z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
