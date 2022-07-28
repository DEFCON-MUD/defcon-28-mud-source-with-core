inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 13, 8 }));
  set_short( "Corridor - x35y13z8" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y14z8.c",
  "south" : DIR+"/rooms/x35y12z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
