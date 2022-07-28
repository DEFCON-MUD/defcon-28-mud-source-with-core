inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 62, 6 }));
  set_short( "Passage - x9y62z6" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y62z6.c",
  "south" : DIR+"/rooms/x9y61z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
