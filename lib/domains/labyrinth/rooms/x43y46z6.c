inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 46, 6 }));
  set_short( "Corridor - x43y46z6" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y46z6.c",
  "north" : DIR+"/rooms/x43y47z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
