inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 12, 1 }));
  set_short( "Corridor - x16y12z1" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y12z1.c",
  "east" : DIR+"/rooms/x17y12z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
