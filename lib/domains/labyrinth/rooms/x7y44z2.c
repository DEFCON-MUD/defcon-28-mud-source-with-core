inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 2 }));
  set_short( "Passage - x7y44z2" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y44z2.c",
  "north" : DIR+"/rooms/x7y45z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
