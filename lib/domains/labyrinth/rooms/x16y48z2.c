inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 48, 2 }));
  set_short( "Hallway - x16y48z2" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y48z2.c",
  "east" : DIR+"/rooms/x17y48z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
