inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 49, 4 }));
  set_short( "Passage - x45y49z4" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y50z4.c",
  "south" : DIR+"/rooms/x45y48z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
