inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 23, 1 }));
  set_short( "Corridor - x13y23z1" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y24z1.c",
  "south" : DIR+"/rooms/x13y22z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
