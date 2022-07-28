inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 51, 1 }));
  set_short( "Corridor - x47y51z1" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y52z1.c",
  "south" : DIR+"/rooms/x47y50z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
