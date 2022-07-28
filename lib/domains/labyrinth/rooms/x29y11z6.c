inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 11, 6 }));
  set_short( "Hallway - x29y11z6" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y12z6.c",
  "south" : DIR+"/rooms/x29y10z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
